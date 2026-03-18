/*
 * XREFs of ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800DADCC
 * Callers:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800DABA0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x180018B0C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAssociations@CBaseRenderTarget@@AEAAXXZ @ 0x1800DAED8 (-RemoveAssociations@CBaseRenderTarget@@AEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1802013A0 (--$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
        CRenderTargetBitmapCache *this,
        struct CScratchRenderTargetBitmap *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // edi
  CBaseRenderTarget *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rsi
  CBaseRenderTarget *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  if ( *((_BYTE *)a2 + 281) )
    --*((_DWORD *)this + 10);
  v3 = (__int64)this + 472;
  if ( !this )
    v3 = 992LL;
  *((_QWORD *)a2 + 34) = *(_QWORD *)v3;
  LODWORD(v4) = *((_DWORD *)this + 6);
  if ( (unsigned int)v4 >= 0x20 )
  {
    v12 = (__int64)this + 472;
    if ( !this )
      v12 = 472LL;
    v13 = *(_QWORD *)v12;
    while ( (_DWORD)v4 )
    {
      v4 = (unsigned int)(v4 - 1);
      v14 = *(_QWORD *)(*(_QWORD *)this + 8 * v4);
      if ( (unsigned __int64)(v13 - *(_QWORD *)(v14 + 272)) > 1 )
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this, v4);
        *(_BYTE *)(v14 + 280) = 0;
        ReleaseInterfaceNoNULL<CScratchRenderTargetBitmap>(v14);
      }
    }
  }
  v5 = (__int64)this + 328;
  if ( !this )
    v5 = 328LL;
  if ( *(int *)v5 >= 0 )
  {
    v6 = *((_DWORD *)this + 6);
    v7 = v6 + 1;
    v8 = v6 + 1 < v6 ? 0x80070216 : 0;
    if ( v6 + 1 < v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(328LL, 0LL, 0, v8, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)this + 5) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8, 1, &v15);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 8LL * v6) = v15;
      *((_DWORD *)this + 6) = v7;
    }
    if ( v8 >= 0 )
    {
      CMILCOMBase::InternalAddRef((CBaseRenderTarget *)((char *)v15 + 160));
      v9 = v15;
      CBaseRenderTarget::RemoveAssociations(v15);
      *((_QWORD *)v9 + 16) = (char *)v9 + 120;
      *((_QWORD *)v9 + 15) = (char *)v9 + 120;
    }
  }
}
