/*
 * XREFs of PspWow64PickBestNtdll @ 0x1400F53F4
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     PsQuerySystemDllInfo @ 0x14068327C (PsQuerySystemDllInfo.c)
 */

__int64 __fastcall PspWow64PickBestNtdll(__int64 a1)
{
  int v1; // r8d
  int *SystemDllInfo; // rax
  unsigned int v3; // r8d
  __int16 v4; // r9
  int v5; // eax
  int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int16 v9; // r9

  if ( a1 && *(char *)(a1 + 9) < 0 )
  {
    v1 = 0;
    while ( 1 )
    {
      SystemDllInfo = (int *)PsQuerySystemDllInfo((unsigned int)v1);
      if ( SystemDllInfo )
      {
        v5 = *SystemDllInfo;
        if ( (v5 & 4) != 0 && HIWORD(v5) == v4 )
          return v3;
      }
      v1 = v3 + 1;
      if ( v1 >= 6 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v6 = 0;
    while ( 1 )
    {
      v7 = PsQuerySystemDllInfo((unsigned int)v6);
      if ( v7 )
      {
        if ( *(_WORD *)(v7 + 2) == v9 )
          break;
      }
      v6 = v8 + 1;
      if ( v6 >= 6 )
        return 0LL;
    }
    return v8;
  }
}
