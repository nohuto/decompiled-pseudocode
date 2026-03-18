/*
 * XREFs of ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00833CC
 * Callers:
 *     ulGetFontData @ 0x1C0083318 (ulGetFontData.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C008415C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1C00846D4 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     EngUnmapFontFileFD @ 0x1C011F2C0 (EngUnmapFontFileFD.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ulGetFontData2(struct DCOBJ *a1, unsigned int a2, unsigned int a3, _BYTE *a4, unsigned int a5)
{
  int v8; // eax
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // ebp
  __int64 v13; // r14
  unsigned int v14; // edi
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, _BYTE *, _QWORD, _QWORD); // rbx
  ULONG_PTR *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  int v20; // [rsp+58h] [rbp-40h]
  _QWORD v21[2]; // [rsp+60h] [rbp-38h] BYREF
  ULONG_PTR *v22; // [rsp+70h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+78h] [rbp-20h]

  v20 = 0;
  v19 = 0LL;
  v8 = RFONTOBJ::bInit((RFONTOBJ *)&v19, a1, 0, 2u);
  v9 = v19;
  if ( v8 )
    GreAcquireSemaphore(*(_QWORD *)(v19 + 504));
  if ( !v9 )
    goto LABEL_13;
  v10 = *(__int64 **)(v9 + 120);
  if ( !v10 || (v11 = *v10, (v21[0] = v11) == 0LL) )
  {
    EngSetLastError(6u);
LABEL_13:
    v14 = -1;
    goto LABEL_12;
  }
  v12 = *((_DWORD *)v10 + 2);
  v13 = *(_QWORD *)(v11 + 80);
  v14 = -1;
  if ( (unsigned int)PFFOBJ::bCheckFntFileInfo((PFFOBJ *)v21) )
  {
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)(v11 + 88) + 3072LL);
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v22, (struct PFFOBJ *)v21);
    if ( a4 )
      *a4 = 0;
    if ( v15 )
      v14 = v15(v13, v12, a2, a3, a5, a4, 0LL, 0LL);
    if ( v23 )
    {
      v17 = v22;
      v18 = v23;
      do
      {
        EngUnmapFontFileFD(*v17++);
        --v18;
      }
      while ( v18 );
    }
  }
LABEL_12:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
  return v14;
}
