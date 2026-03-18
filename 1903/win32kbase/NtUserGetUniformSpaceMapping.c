/*
 * XREFs of NtUserGetUniformSpaceMapping @ 0x1C0064C60
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     HMValidateSharedHandle @ 0x1C003D614 (HMValidateSharedHandle.c)
 *     DrvIsUniformSpaceMapping @ 0x1C0064D90 (DrvIsUniformSpaceMapping.c)
 */

__int64 __fastcall NtUserGetUniformSpaceMapping(unsigned __int64 a1, _OWORD *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // r14d
  __int128 *v14; // rax
  _OWORD *v15; // rax
  __int128 v16; // [rsp+38h] [rbp-20h]

  v16 = 0uLL;
  v4 = 0;
  EnterCrit(0, 1);
  v7 = HMValidateSharedHandle(a1, v5, v6);
  if ( v7 )
  {
    v10 = *(_QWORD *)(v7 + 240);
    if ( v10 )
    {
      v11 = *(_QWORD *)(gpDispInfo + 16);
      v12 = 0;
      if ( (unsigned int)DrvIsUniformSpaceMapping(v11) )
      {
        v9 = *(unsigned int *)(v11 + 20);
        if ( (_DWORD)v9 )
        {
          v14 = (__int128 *)(v11 + 76);
          v8 = (unsigned int)v9;
          do
          {
            if ( *(_QWORD *)((char *)v14 - 36) == v10 )
            {
              v16 = *v14;
              v12 = 1;
            }
            v14 = (__int128 *)((char *)v14 + 56);
            --v8;
          }
          while ( v8 );
        }
      }
      if ( v12 )
      {
        v4 = 1;
        v9 = MmUserProbeAddress;
        v15 = a2;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          v15 = (_OWORD *)MmUserProbeAddress;
        *v15 = *v15;
        *a2 = v16;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v4;
}
