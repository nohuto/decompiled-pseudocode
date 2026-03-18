/*
 * XREFs of ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C0252770
 * Callers:
 *     ??1InkDevice@@UEAA@XZ @ 0x1C02509F4 (--1InkDevice@@UEAA@XZ.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0251450 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     ?UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C023A460 (-UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ.c)
 */

void __fastcall InkDevice::UnInitialize(InkDevice *this)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int64 v4; // rcx
  __int64 v5; // rcx
  _OWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    Rim::RimBackedDeviceBase::UnInitialize(this);
    *((_QWORD *)this + 13) = 0LL;
    *((_DWORD *)this + 28) = 0;
    memset(v6, 0, sizeof(v6));
    v2 = v6[0];
    *((_DWORD *)this + 37) = 0;
    v3 = v6[1];
    v4 = *((_QWORD *)this + 19);
    *(_OWORD *)((char *)this + 116) = v2;
    *(_OWORD *)((char *)this + 132) = v3;
    if ( v4 )
    {
      Win32FreePool(v4);
      *((_QWORD *)this + 19) = 0LL;
    }
    v5 = *((_QWORD *)this + 20);
    if ( v5 )
    {
      Win32FreePool(v5);
      *((_QWORD *)this + 20) = 0LL;
    }
  }
}
