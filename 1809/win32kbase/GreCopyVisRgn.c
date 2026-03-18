/*
 * XREFs of GreCopyVisRgn @ 0x1C009D9C0
 * Callers:
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 * Callees:
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C001E4E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0023940 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00273C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00273F4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     DC::AcquireDcVisRgnShared @ 0x1C00ABA50 (DC--AcquireDcVisRgnShared.c)
 */

__int64 __fastcall GreCopyVisRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // edi
  __int64 v5; // [rsp+20h] [rbp-29h] BYREF
  char v6; // [rsp+28h] [rbp-21h]
  struct OBJECT *v7[6]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v8[8]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v9; // [rsp+C0h] [rbp+77h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a2, 0, 0);
  if ( v7[0] && v8[0] )
  {
    DC::AcquireDcVisRgnShared(v7[0], &v5);
    v9 = *((_QWORD *)v7[0] + 143);
    if ( v9 && (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v8, (struct RGNOBJ *)&v9) )
      v3 = RGNOBJ::iComplexity((RGNOBJ *)v8);
    if ( v6 )
      CPushLock::ReleaseLock((CPushLock *)(v5 + 1112));
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v8);
  DCOBJA::~DCOBJA(v7);
  return v3;
}
