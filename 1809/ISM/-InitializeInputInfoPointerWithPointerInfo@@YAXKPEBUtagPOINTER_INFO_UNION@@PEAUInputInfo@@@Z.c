/*
 * XREFs of ?InitializeInputInfoPointerWithPointerInfo@@YAXKPEBUtagPOINTER_INFO_UNION@@PEAUInputInfo@@@Z @ 0x1800846C8
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180083E6C (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeInputInfoPointerWithPointerInfo(
        unsigned int a1,
        const struct tagPOINTER_INFO_UNION *a2,
        struct InputInfo *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  v3 = 32LL * a1;
  v4 = a1;
  *(_DWORD *)((char *)a3 + v3 + 56) = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 3);
  if ( (v5 & 2) != 0 )
  {
    *(_DWORD *)((char *)a3 + v3 + 60) |= 1u;
    v5 = *((_DWORD *)a2 + 3);
  }
  if ( (v5 & 4) != 0 )
  {
    *(_DWORD *)((char *)a3 + v3 + 60) |= 2u;
    v5 = *((_DWORD *)a2 + 3);
  }
  if ( (v5 & 0x8000) != 0 )
    *(_DWORD *)((char *)a3 + v3 + 60) |= 4u;
  *(_DWORD *)((char *)a3 + v3 + 56) = *((_DWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 12);
  *(_DWORD *)((char *)a3 + v3 + 72) = v6;
  *((_DWORD *)a3 + 8 * v4 + 16) = v6;
  v7 = *((_DWORD *)a2 + 13);
  *(_DWORD *)((char *)a3 + v3 + 76) = v7;
  *(_DWORD *)((char *)a3 + v3 + 68) = v7;
  *(_DWORD *)((char *)a3 + v3 + 80) = *((_DWORD *)a2 + 14);
  *(_DWORD *)((char *)a3 + v3 + 84) = *((_DWORD *)a2 + 15);
}
