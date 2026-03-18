/*
 * XREFs of ?ResolveInputObject@InputObjectMap@@SAJU_LUID@@PEAPEBUCompositionInputObject@@@Z @ 0x1C01C63F8
 * Callers:
 *     ?GetTransformFromVisualIdentifier@@YAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C011C7C0 (-GetTransformFromVisualIdentifier@@YAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0037310 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@U_LUID@@@Z @ 0x1C01C60EC (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@U_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::ResolveInputObject(struct _LUID a1, const struct CompositionInputObject **a2)
{
  unsigned int v3; // edi
  struct InputObjectMapEntry *Entry; // rax
  struct InputObjectMapEntry *v6; // rbx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v8, (struct _EX_PUSH_LOCK *)a2);
  Entry = InputObjectMap::FindEntry(a1);
  v6 = Entry;
  if ( Entry )
  {
    ObReferenceObjectByPointer(*((PVOID *)Entry + 3), 3u, ExCompositionObjectType, 0);
    *a2 = (const struct CompositionInputObject *)*((_QWORD *)v6 + 3);
  }
  else
  {
    v3 = -1073741275;
  }
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
