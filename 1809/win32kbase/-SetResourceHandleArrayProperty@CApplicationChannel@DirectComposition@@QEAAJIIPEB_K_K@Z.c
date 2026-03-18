/*
 * XREFs of ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C0169048
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00199AC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        const unsigned __int64 *a4,
        unsigned __int64 a5)
{
  __int64 v5; // r14
  unsigned __int64 v6; // r10
  struct DirectComposition::CResourceMarshaler *v10; // rsi
  unsigned __int64 v11; // rbp
  signed int v12; // edi
  unsigned int v13; // edx
  __int64 v14; // rcx
  char v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  v16 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( a2 && v6 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v10 = *(struct DirectComposition::CResourceMarshaler **)(v6 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v10 = 0LL;
  }
  v11 = a5;
  v12 = v10 == 0LL ? 0xC0000022 : 0;
  if ( v10 && a5 )
  {
    v5 = Win32AllocPoolWithQuota(8 * a5, 0x66624344u);
    if ( !v5 )
      v12 = -1073741801;
    if ( v12 < 0 )
      goto LABEL_17;
    v13 = 0;
    if ( v11 )
    {
      v14 = 0LL;
      do
      {
        ++v13;
        *(_QWORD *)(v5 + 8 * v14) = a4[v14];
        v14 = v13;
      }
      while ( v13 < v11 );
    }
  }
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)v10 + 160LL))(
            v10,
            a3,
            v5,
            v11,
            &v16);
    if ( v12 >= 0 )
    {
      if ( v16 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
      return (unsigned int)v12;
    }
  }
LABEL_17:
  if ( v5 )
    Win32FreePool(v5);
  return (unsigned int)v12;
}
