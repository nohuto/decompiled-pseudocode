/*
 * XREFs of SepLinkLogonSessions @ 0x140176F18
 * Callers:
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1400140A0 (SepDeReferenceLogonSessionDirect.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     SepReferenceLogonSession @ 0x1405BE6F4 (SepReferenceLogonSession.c)
 *     SepStopReferencingLogonSession @ 0x1405BE9C8 (SepStopReferencingLogonSession.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepRemoveTokenLogonSession @ 0x1408A3D60 (SepRemoveTokenLogonSession.c)
 */

__int64 __fastcall SepLinkLogonSessions(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  _QWORD *v5; // r15
  NTSTATUS v7; // eax
  PVOID v8; // r14
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  _QWORD *v13; // rdi
  int v14; // eax
  _QWORD *v15; // rsi
  PVOID v17; // [rsp+40h] [rbp-19h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-11h] BYREF
  PVOID Object; // [rsp+50h] [rbp-9h] BYREF
  int v20; // [rsp+58h] [rbp-1h] BYREF
  __int64 v21; // [rsp+60h] [rbp+7h]
  __int64 v22; // [rsp+68h] [rbp+Fh]
  int v23; // [rsp+70h] [rbp+17h]
  __int128 v24; // [rsp+78h] [rbp+1Fh]
  PVOID v25; // [rsp+D8h] [rbp+7Fh] BYREF

  v17 = 0LL;
  v25 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, a3) )
    return (unsigned int)-1073741727;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 216) + 48LL) )
    return (unsigned int)-1073741811;
  v7 = ObReferenceObjectByHandle(a2, 0x88u, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
  v8 = Object;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = *((_QWORD *)Object + 27);
    if ( *(_QWORD *)(v10 + 48) )
      goto LABEL_21;
    v11 = *(_QWORD *)(a1 + 216);
    if ( v11 == v10 )
    {
      *(_DWORD *)(v11 + 32) |= 4u;
      v9 = 0;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(a1 + 192) != 1 || *((_DWORD *)Object + 48) != 1 )
    {
LABEL_21:
      v9 = -1073741811;
      goto LABEL_15;
    }
    v20 = 48;
    v21 = 0LL;
    v23 = 0;
    v22 = 0LL;
    v24 = 0LL;
    v12 = SepDuplicateToken(a1, (unsigned int)&v20, 0, 1, 0, 0, 0, (__int64)&v25);
    v13 = v25;
    v9 = v12;
    if ( v12 >= 0 )
    {
      v14 = SepDuplicateToken((_DWORD)v8, (unsigned int)&v20, 0, 1, 0, 0, 0, (__int64)&v17);
      v15 = v17;
      v9 = v14;
      if ( v14 >= 0 )
      {
        v9 = SepReferenceLogonSession(v13 + 3, &v18);
        if ( v9 >= 0 )
        {
          *(_QWORD *)(v13[27] + 48LL) = v13;
          *(_QWORD *)(v13[27] + 16LL) = *(_QWORD *)(v15[27] + 8LL);
          *(_DWORD *)(v13[27] + 32LL) |= 2u;
          *(_QWORD *)(v15[27] + 48LL) = v15;
          *(_QWORD *)(v15[27] + 16LL) = *(_QWORD *)(v13[27] + 8LL);
          *(_DWORD *)(v15[27] + 32LL) |= 4u;
          if ( SeTokenLeakTracking )
          {
            SepRemoveTokenLogonSession(v15);
            SepRemoveTokenLogonSession(v13);
          }
          v9 = SepStopReferencingLogonSession(v15);
          if ( v9 >= 0 )
          {
            v9 = SepStopReferencingLogonSession(v13);
            if ( v9 >= 0 )
              goto LABEL_15;
          }
        }
        v5 = v18;
      }
      if ( v15 )
        ObfDereferenceObjectWithTag(v15, 0x746C6644u);
    }
    if ( v13 )
      ObfDereferenceObjectWithTag(v13, 0x746C6644u);
    if ( v5 )
      SepDeReferenceLogonSessionDirect(v5);
  }
LABEL_15:
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  return (unsigned int)v9;
}
