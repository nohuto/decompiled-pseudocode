/*
 * XREFs of sub_18013426A @ 0x18013426A
 * Callers:
 *     <none>
 * Callees:
 *     ?__ExceptionPtrCreate@@YAXPEAX@Z @ 0x1801275E2 (-__ExceptionPtrCreate@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrDestroy@@YAXPEAX@Z @ 0x1801275E8 (-__ExceptionPtrDestroy@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrCurrentException@@YAXPEAX@Z @ 0x1801275FA (-__ExceptionPtrCurrentException@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrAssign@@YAXPEAXPEBX@Z @ 0x18012770E (-__ExceptionPtrAssign@@YAXPEAXPEBX@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_18013426A(__int64 a1, __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 48);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  __ExceptionPtrCreate((void *)(a2 + 32));
  __ExceptionPtrCurrentException((void *)(a2 + 32));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 32));
  __ExceptionPtrDestroy((void *)(a2 + 32));
  return &loc_18011CC9C;
}
