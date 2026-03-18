/*
 * XREFs of IopRetrieveSystemDeviceName @ 0x1406DFE48
 * Callers:
 *     IoQuerySystemDeviceName @ 0x1406DFDE4 (IoQuerySystemDeviceName.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopRetrieveSystemDeviceName(
        __int64 (__fastcall *a1)(unsigned __int64, _QWORD, _DWORD *),
        unsigned __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // esi
  unsigned __int64 v9; // r14
  int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  _DWORD v14[14]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 && a3 > 0x10 )
  {
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v7 = a2;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 15) = *(_BYTE *)(v7 + 15);
    }
    v8 = a3 - 16;
    v9 = a2 + 16;
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
  }
  if ( v8 > 0xFFFF )
    v8 = 0xFFFF;
  v10 = a1(v9, v8, v14);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1073741789 )
    {
      *a4 = 0;
      return v11;
    }
    v12 = v14[0];
  }
  else
  {
    v12 = v14[0];
    *(_WORD *)a2 = LOWORD(v14[0]) - 2;
    *(_WORD *)(a2 + 2) = v8;
    *(_QWORD *)(a2 + 8) = v9;
  }
  *a4 = v12 + 16;
  return v11;
}
