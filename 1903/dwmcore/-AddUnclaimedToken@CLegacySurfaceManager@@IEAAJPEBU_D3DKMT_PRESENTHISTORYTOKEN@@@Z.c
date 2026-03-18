/*
 * XREFs of ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1801A3F70
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z @ 0x18008D350 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x18002A77C (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddUnclaimedToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  SIZE_T v3; // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  void *v7; // rdi
  unsigned int v8; // ebx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  signed int v13; // eax
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF
  void *lpMem; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((unsigned int *)a2 + 1);
  lpMem = 0LL;
  v15 = 0uLL;
  v5 = HrAlloc(v3, &lpMem);
  v7 = lpMem;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x3Cu, 0LL);
  }
  else
  {
    memcpy_0(lpMem, a2, *((unsigned int *)a2 + 1));
    v9 = (_QWORD *)((char *)this + 104);
    *((_QWORD *)&v15 + 1) = v7;
    v10 = *((unsigned int *)this + 32);
    v11 = v10 + 1;
    if ( (int)v10 + 1 >= (unsigned int)v10 )
    {
      if ( v11 <= *((_DWORD *)this + 31) )
      {
        v8 = 0;
        *(_OWORD *)(*v9 + 16 * v10) = v15;
        *((_DWORD *)this + 32) = v11;
        return v8;
      }
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 16, 1, &v15);
      v8 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v13, 0xC3u, 0LL);
    }
    else
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( (v8 & 0x80000000) == 0 )
      return v8;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v8, 0x41u, 0LL);
  }
  if ( v7 )
    operator delete(v7);
  return v8;
}
