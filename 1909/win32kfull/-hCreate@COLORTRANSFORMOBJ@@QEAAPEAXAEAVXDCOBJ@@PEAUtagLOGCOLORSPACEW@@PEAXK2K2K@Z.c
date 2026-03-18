/*
 * XREFs of ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C028DE10
 * Callers:
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02AE450 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0090C08 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C028DBA8 (-bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C028DC04 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

struct HOBJ__ *__fastcall COLORTRANSFORMOBJ::hCreate(
        COLORTRANSFORMOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGCOLORSPACEW *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  struct HOBJ__ *v9; // rdi
  __int64 v10; // r15
  __int64 v14; // rbx
  struct OBJECT *Object; // rax
  struct OBJECT *v16; // rsi
  int v17; // eax
  __int64 (__fastcall *v18)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD); // rax
  __int128 v20; // [rsp+50h] [rbp-49h] BYREF
  __int64 v21; // [rsp+60h] [rbp-39h]
  int v22; // [rsp+68h] [rbp-31h]
  __int64 v23; // [rsp+70h] [rbp-29h] BYREF
  int v24; // [rsp+78h] [rbp-21h]
  int v25; // [rsp+7Ch] [rbp-1Dh]
  __int16 v26; // [rsp+80h] [rbp-19h]
  __int64 v27; // [rsp+88h] [rbp-11h]
  __int64 v28; // [rsp+90h] [rbp-9h]
  __int64 v29; // [rsp+E8h] [rbp+4Fh] BYREF
  struct tagLOGCOLORSPACEW *v30; // [rsp+F0h] [rbp+57h]

  v30 = a3;
  v9 = 0LL;
  v10 = 0LL;
  v14 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( !v14 )
    return v9;
  Object = (struct OBJECT *)AllocateObject(32LL, 14LL, 0LL);
  v16 = Object;
  if ( Object )
  {
    v29 = 0LL;
    v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v29, Object, 0xEu, 2);
    if ( v9 )
    {
      v24 = 0;
      v25 = 0;
      v28 = 0LL;
      v27 = 0LL;
      v23 = 0LL;
      *(_QWORD *)this = v16;
      v17 = *(_DWORD *)(v14 + 40);
      v26 = 256;
      v20 = 0LL;
      v22 = 1;
      if ( (v17 & 1) != 0 )
      {
        *(_QWORD *)&v20 = *(_QWORD *)(v14 + 48);
        v21 = v14;
        GreAcquireSemaphore(v20);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
      }
      v18 = *(__int64 (__fastcall **)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD))(v14 + 3200);
      if ( v18 )
        v10 = v18(*(_QWORD *)(v14 + 1800), v30, a4, a5, a6, a7, a8, a9, 0);
      else
        EngSetLastError(0x57u);
      if ( v10 )
      {
        *(_QWORD *)(*(_QWORD *)this + 24LL) = v10;
        XDCOBJ::bAddColorTransform(a2, v9);
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
      if ( v23 )
        DLODCOBJ::vUnlock((DLODCOBJ *)&v23);
    }
    if ( v29 )
      _InterlockedDecrement((volatile signed __int32 *)(v29 + 12));
  }
  else
  {
    EngSetLastError(8u);
  }
  if ( !v16 )
    goto LABEL_20;
  if ( v9 )
  {
    if ( !v10 )
    {
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      COLORTRANSFORMOBJ::bDelete(this, a2, 0);
      v9 = 0LL;
      v16 = 0LL;
    }
LABEL_20:
    if ( v9 )
      return v9;
  }
  if ( v16 )
    FreeObject(v16, 14LL);
  return v9;
}
