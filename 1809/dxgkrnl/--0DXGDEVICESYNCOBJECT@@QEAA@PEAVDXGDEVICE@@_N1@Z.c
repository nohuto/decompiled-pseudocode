/*
 * XREFs of ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C00AD6D0
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00DF410 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0011E90 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 */

DXGDEVICESYNCOBJECT *__fastcall DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(
        DXGDEVICESYNCOBJECT *this,
        struct DXGDEVICE *a2,
        char a3,
        char a4)
{
  char v5; // cl
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  v5 = *((_BYTE *)this + 92);
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 92) = (4 * a4) | (2 * a3) & 0xFB | v5 & 0xF8;
  if ( a3 )
  {
    if ( !*((_DWORD *)a2 + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 13)) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v8 + 24) = 7612LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)a2 + 2)) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v10 + 24) = 7613LL;
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = (_QWORD *)((char *)a2 + 408);
    v12 = *((_QWORD *)a2 + 51);
    if ( *(struct DXGDEVICE **)(v12 + 8) != (struct DXGDEVICE *)((char *)a2 + 408) )
      __fastfail(3u);
    *(_QWORD *)this = v12;
    *((_QWORD *)this + 1) = v11;
    *(_QWORD *)(v12 + 8) = this;
    *v11 = this;
  }
  return this;
}
