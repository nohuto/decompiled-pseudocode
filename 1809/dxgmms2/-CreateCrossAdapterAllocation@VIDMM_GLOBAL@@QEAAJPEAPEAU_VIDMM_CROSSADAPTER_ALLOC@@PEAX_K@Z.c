/*
 * XREFs of ?CreateCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAX_K@Z @ 0x1C00A763C
 * Callers:
 *     VidMmCreateCrossAdapterAllocation @ 0x1C0025220 (VidMmCreateCrossAdapterAllocation.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001A80 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateCrossAdapterAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_CROSSADAPTER_ALLOC **a2,
        void *a3,
        SIZE_T a4)
{
  unsigned int v4; // ebp
  HANDLE v5; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  KSPIN_LOCK *v12; // rax
  __int64 v13; // rcx
  KSPIN_LOCK *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rax

  v4 = 0;
  v5 = 0LL;
  if ( !a3 || (v5 = MmSecureVirtualMemory(a3, a4, 4u)) != 0LL )
  {
    v12 = (KSPIN_LOCK *)operator new(0x30uLL, 0x64356956u, (__int64)a3, (POOL_TYPE)512);
    v14 = v12;
    if ( v12 )
    {
      v15 = v12 + 2;
      v15[1] = v15;
      *v15 = v15;
      KeInitializeSpinLock(v14 + 4);
    }
    else
    {
      v14 = 0LL;
    }
    *a2 = (struct _VIDMM_CROSSADAPTER_ALLOC *)v14;
    if ( v14 )
    {
      v14[1] = (KSPIN_LOCK)v5;
    }
    else
    {
      _InterlockedIncrement(&dword_1C004D6FC);
      v16 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v16 + 24) = 1936LL;
      WdLogEvent5_WdLowResource(v16);
      v4 = -1073741801;
      if ( v5 )
        MmUnsecureVirtualMemory(v5);
      if ( *a2 )
        operator delete(*a2);
    }
    return v4;
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = a3;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdAssertion(v10);
    return 3221225485LL;
  }
}
