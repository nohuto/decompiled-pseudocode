/*
 * XREFs of SeCreateClientSecurityFromSubjectContextEx @ 0x14031DAF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSidDominatesForTrust @ 0x14000CAB0 (RtlSidDominatesForTrust.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     SepCreateClientSecurityEx @ 0x1405DE7A0 (SepCreateClientSecurityEx.c)
 */

__int64 __fastcall SeCreateClientSecurityFromSubjectContextEx(__int64 a1, int a2, char a3, __int64 a4)
{
  void *v4; // rbx
  __int64 v5; // r14
  char v6; // r15
  int v11; // r8d
  int v12; // ebp
  __int64 v13; // r11
  int ClientSecurity; // edi
  BOOLEAN DominatesTrust; // [rsp+90h] [rbp+8h] BYREF

  v4 = *(void **)a1;
  v5 = 0LL;
  v6 = 0;
  DominatesTrust = 0;
  if ( !v4 )
    v4 = *(void **)(a1 + 16);
  ObfReferenceObjectWithTag(v4, 0x746C6644u);
  if ( *(_QWORD *)a1 )
  {
    v12 = 2;
    RtlSidDominatesForTrust(
      *(PSID *)(*(_QWORD *)(a1 + 16) + 1104LL),
      *(PSID *)(*(_QWORD *)a1 + 1104LL),
      &DominatesTrust);
    if ( !DominatesTrust )
    {
      v6 = 1;
      v5 = v13;
    }
  }
  else
  {
    v12 = 1;
  }
  LOBYTE(v11) = a3;
  ClientSecurity = SepCreateClientSecurityEx((_DWORD)v4, a2, v11, v12, 0, *(_DWORD *)(a1 + 8), 1, 0LL, v6, v5, a4);
  if ( ClientSecurity < 0 || !*(_BYTE *)(a4 + 8) )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return (unsigned int)ClientSecurity;
}
