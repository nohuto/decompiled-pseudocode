/*
 * XREFs of ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x180246D60
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x180240044 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x18024738C (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CHolographicInteropTaskQueue@@AEAAJXZ @ 0x180246E34 (-Initialize@CHolographicInteropTaskQueue@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicInteropTaskQueue::Create(union _SLIST_HEADER **a1)
{
  union _SLIST_HEADER *v2; // rax
  __int64 v3; // rcx
  union _SLIST_HEADER *v4; // rbx
  unsigned int v5; // edi
  signed int v6; // eax
  __int64 v7; // rcx
  void (__fastcall **Alignment)(union _SLIST_HEADER *); // rdx

  v2 = (union _SLIST_HEADER *)operator new(0x40uLL);
  v4 = v2;
  if ( v2 )
  {
    *((_DWORD *)&v2->HeaderX64 + 2) = 0;
    v2->Alignment = (ULONGLONG)&CHolographicInteropTaskQueue::`vftable';
    v2[3].Alignment = 0LL;
    InitializeSListHead(v2 + 1);
    InitializeSListHead(v4 + 2);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v6 = CHolographicInteropTaskQueue::Initialize((CHolographicInteropTaskQueue *)v4);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x10u, 0LL);
      (*(void (__fastcall **)(union _SLIST_HEADER *))(v4->Alignment + 8))(v4);
    }
    else
    {
      Alignment = (void (__fastcall **)(union _SLIST_HEADER *))v4->Alignment;
      *a1 = v4;
      (*Alignment)(v4);
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, 0x8007000E, 0xEu, 0LL);
  }
  return v5;
}
