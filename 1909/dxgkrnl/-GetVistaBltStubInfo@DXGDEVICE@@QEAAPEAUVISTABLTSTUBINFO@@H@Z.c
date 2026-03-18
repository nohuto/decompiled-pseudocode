/*
 * XREFs of ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C0043DBC
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C025990C (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct VISTABLTSTUBINFO *__fastcall DXGDEVICE::GetVistaBltStubInfo(DXGDEVICE *this, int a2)
{
  PVOID v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  if ( a2 )
  {
    if ( !*((_QWORD *)this + 224) )
    {
      v3 = operator new[](0x10uLL, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 224) = v3;
      if ( !v3 )
      {
        v8 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
        *(_QWORD *)(v8 + 24) = 1066LL;
        WdLogEvent5_WdLowResource(v8);
      }
    }
  }
  return (struct VISTABLTSTUBINFO *)*((_QWORD *)this + 224);
}
