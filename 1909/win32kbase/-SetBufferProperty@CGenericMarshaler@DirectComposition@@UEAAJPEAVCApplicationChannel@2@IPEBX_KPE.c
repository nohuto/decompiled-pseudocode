/*
 * XREFs of ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01AE120
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C01A472C (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C01AE04C (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetBufferProperty(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  size_t v6; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  bool *v15; // rax
  __int64 *v16; // [rsp+50h] [rbp+8h] BYREF

  v6 = Size;
  DirectComposition::CGenericMarshaler::FindProperty((__int64)this, &v16, a3);
  v10 = v16;
  if ( v16 == (__int64 *)(*((_QWORD *)this + 6) + 8LL * *((_QWORD *)this + 7)) )
    goto LABEL_9;
  v11 = *v16;
  if ( *(_BYTE *)(*v16 + 4) != 5 )
    v11 = 0LL;
  if ( !v11 )
    return 3221225485LL;
  v13 = 0LL;
  if ( *(_QWORD *)(v11 + 8) >= v6 )
    v13 = v11;
  if ( !v13 )
  {
LABEL_9:
    if ( v6 + 24 < v6 )
      return 3221225506LL;
    v14 = Win32AllocPoolWithQuota(v6 + 24, 0);
    v13 = v14;
    if ( v14 )
    {
      *(_DWORD *)v14 = a3;
      *(_WORD *)(v14 + 4) = 5;
      *(_QWORD *)(v14 + 8) = v6;
      *(_QWORD *)(v14 + 16) = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    if ( !v13 )
      return 3221225495LL;
    if ( v10 == (__int64 *)(*((_QWORD *)this + 6) + 8LL * *((_QWORD *)this + 7)) )
    {
      if ( !DirectComposition::CGenericPropertyList::push_back(
              (DirectComposition::CGenericMarshaler *)((char *)this + 48),
              (struct DirectComposition::CGenericProperty *)v13) )
      {
        Win32FreePool(v13);
        return 3221225495LL;
      }
    }
    else
    {
      Win32FreePool(*v10);
      *v10 = v13;
    }
  }
  memmove((void *)(v13 + 24), a4, v6);
  v15 = a6;
  *(_QWORD *)(v13 + 16) = v6;
  *(_BYTE *)(v13 + 5) = 1;
  *v15 = 1;
  return 0LL;
}
