/*
 * XREFs of NtUserGetUniformSpaceMapping @ 0x1C004F9D0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     HMValidateSharedHandle @ 0x1C004FDE4 (HMValidateSharedHandle.c)
 *     DrvIsUniformSpaceMapping @ 0x1C004FFB0 (DrvIsUniformSpaceMapping.c)
 */

__int64 __fastcall NtUserGetUniformSpaceMapping(__int64 a1, _OWORD *a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // r14d
  __int128 *v12; // rax
  _OWORD *v13; // rax
  __int128 v14; // [rsp+38h] [rbp-20h]

  v14 = 0uLL;
  v4 = 0;
  EnterCrit(0, 1);
  v5 = HMValidateSharedHandle(a1);
  if ( v5 )
  {
    v8 = *(_QWORD *)(v5 + 240);
    if ( v8 )
    {
      v9 = *(_QWORD *)(gpDispInfo + 16);
      v10 = 0;
      if ( (unsigned int)DrvIsUniformSpaceMapping(v9) )
      {
        v7 = *(unsigned int *)(v9 + 20);
        if ( (_DWORD)v7 )
        {
          v12 = (__int128 *)(v9 + 76);
          v6 = (unsigned int)v7;
          do
          {
            if ( *(_QWORD *)((char *)v12 - 36) == v8 )
            {
              v14 = *v12;
              v10 = 1;
            }
            v12 = (__int128 *)((char *)v12 + 56);
            --v6;
          }
          while ( v6 );
        }
      }
      if ( v10 )
      {
        v4 = 1;
        v7 = MmUserProbeAddress;
        v13 = a2;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          v13 = (_OWORD *)MmUserProbeAddress;
        *v13 = *v13;
        *a2 = v14;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
