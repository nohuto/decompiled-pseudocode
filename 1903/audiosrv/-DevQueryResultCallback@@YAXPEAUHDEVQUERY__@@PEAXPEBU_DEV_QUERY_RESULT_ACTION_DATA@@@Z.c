/*
 * XREFs of ?DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z @ 0x1800C28A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003190C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180031950 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCOnDeviceWorkItem@@PEAV312@1@Z @ 0x1800BF6A8 (-NewNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 */

void __fastcall DevQueryResultCallback(
        struct HDEVQUERY__ *a1,
        __int64 *a2,
        const struct _DEV_QUERY_RESULT_ACTION_DATA *a3)
{
  void *v3; // rcx
  const unsigned __int16 *v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rdi
  __int64 *v9; // rax
  __int64 **v10; // rcx
  unsigned __int16 *v11; // [rsp+68h] [rbp+10h] BYREF

  v3 = (void *)*(unsigned int *)a3;
  v11 = 0LL;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 && *((_DWORD *)a3 + 2) == 1 )
    {
      v5 = (const unsigned __int16 *)*((_QWORD *)a3 + 2);
      v6 = -1LL;
      do
        ++v6;
      while ( v5[v6] );
      v7 = v6 + 1;
      if ( v6 + 1 >= v6 && is_mul_ok(v7, 2uLL) )
      {
        if ( (int)CTCoAllocPolicy::Alloc(v3, (v7 * (unsigned __int128)2uLL) >> 64, 2 * v7, (void **)&v11) < 0 )
        {
          CoTaskMemFree(v11);
          return;
        }
        StringCchCopyNExW((char *)v11, v6 + 1, v5, v6);
        v8 = (_QWORD *)*a2;
        v9 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::NewNode(
               *a2,
               (__int64 *)&v11,
               *(_QWORD *)(*a2 + 8));
        v10 = (__int64 **)v8[1];
        if ( v10 )
          *v10 = v9;
        else
          *v8 = v9;
        v8[1] = v9;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 2) = *((_DWORD *)a3 + 2);
  }
  CoTaskMemFree(0LL);
}
