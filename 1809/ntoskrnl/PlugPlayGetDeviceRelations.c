/*
 * XREFs of PlugPlayGetDeviceRelations @ 0x140901F3C
 * Callers:
 *     PiPnpRtlGetDeviceRelationsList @ 0x14082A6C0 (PiPnpRtlGetDeviceRelationsList.c)
 * Callees:
 *     ZwPlugPlayControl @ 0x1401BA870 (ZwPlugPlayControl.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall PlugPlayGetDeviceRelations(
        __int128 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        int a6)
{
  __int128 v10; // xmm0
  NTSTATUS v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  _OWORD Buffer[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 && a5 && !a6 )
  {
    memset(Buffer, 0, sizeof(Buffer));
    v10 = *a1;
    *(_QWORD *)&Buffer[1] = __PAIR64__(a4, a2);
    *((_QWORD *)&Buffer[1] + 1) = a3;
    Buffer[0] = v10;
    v11 = ZwPlugPlayControl(PlugPlayControlQueryDeviceRelations, Buffer, 0x20u);
    v12 = v11;
    if ( v11 < 0 )
    {
      if ( v11 == -1073741789 )
      {
        *a5 = DWORD1(Buffer[1]);
        return v12;
      }
    }
    else
    {
      v13 = DWORD1(Buffer[1]);
      *a5 = DWORD1(Buffer[1]);
      if ( v13 )
      {
        if ( v13 > a4 )
          return (unsigned int)-1073741789;
        return v12;
      }
    }
    return (unsigned int)-1073741772;
  }
  return 3221225485LL;
}
