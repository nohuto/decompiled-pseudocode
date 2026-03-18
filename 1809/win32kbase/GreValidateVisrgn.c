/*
 * XREFs of GreValidateVisrgn @ 0x1C0027468
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0027A50 (ReleaseCacheDC.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00273C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00273F4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     DC::AcquireDcVisRgnShared @ 0x1C00ABA50 (DC--AcquireDcVisRgnShared.c)
 *     DC::AcquireDcVisRgnExclusive @ 0x1C00AC264 (DC--AcquireDcVisRgnExclusive.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00AC29C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 */

void __fastcall GreValidateVisrgn(HDC a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // eax
  bool v6; // bl
  __int64 v7; // [rsp+20h] [rbp-50h] BYREF
  char v8; // [rsp+28h] [rbp-48h]
  struct _RECTL v9; // [rsp+30h] [rbp-40h] BYREF
  struct DC *v10[6]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+90h] [rbp+20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v10, a1);
  if ( v10[0] )
  {
    v3 = *((_DWORD *)v10[0] + 9);
    v4 = v3 | 0x100000;
    v5 = v3 & 0xFFEFFFFF;
    if ( !a2 )
      v4 = v5;
    *((_DWORD *)v10[0] + 9) = v4;
    DC::AcquireDcVisRgnShared(v10[0], &v7);
    v6 = GrepValidateVisRgn(v10[0], *((struct REGION **)v10[0] + 143), (struct ERECTL *)&v9);
    if ( v8 )
      CPushLock::ReleaseLock((CPushLock *)(v7 + 1112));
    if ( !v6 )
    {
      DC::AcquireDcVisRgnExclusive(v10[0], &v7);
      v11 = *((_QWORD *)v10[0] + 143);
      if ( v11 )
        RGNOBJ::vSet((RGNOBJ *)&v11, &v9);
      if ( v8 )
        CPushLock::ReleaseLock((CPushLock *)(v7 + 1112));
    }
  }
  DCOBJA::~DCOBJA(v10);
}
