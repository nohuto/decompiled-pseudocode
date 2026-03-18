/*
 * XREFs of ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800C3F40
 * Callers:
 *     ??1CDirectFlipInfo@@UEAA@XZ @ 0x1800DD408 (--1CDirectFlipInfo@@UEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x1801936C4 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 */

void __fastcall CDirectFlipInfo::Reset(CDirectFlipInfo *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 16) - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          goto LABEL_5;
        (*(void (__fastcall **)(CDirectFlipInfo *))(*(_QWORD *)this + 24LL))(this);
      }
      if ( *((_DWORD *)this + 17) != 1 )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 96LL))(*((_QWORD *)this + 4));
        *(_BYTE *)(*((_QWORD *)this + 1) + 13438LL) = 1;
      }
    }
  }
  ReleaseInterface<IBitmapLock>((__int64 *)this + 2);
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 3) = 0LL;
  }
  ReleaseInterface<IBitmapLock>((__int64 *)this + 4);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 5) = 0LL;
  }
  std::shared_ptr<CRegion>::reset((char *)this + 48);
  *((_DWORD *)this + 20) = 0;
  *((_WORD *)this + 48) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
LABEL_5:
  *((_DWORD *)this + 16) = 0;
}
