/*
 * XREFs of ?FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z @ 0x1C02440EC
 * Callers:
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0291690 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD **__fastcall DXGGLOBAL::FindVirtualMachine(struct _KTHREAD **this, struct _GUID *a2)
{
  __int64 v4; // rax
  struct _KTHREAD **i; // rcx
  __int64 v6; // r8

  if ( this[34] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 7596LL;
    WdLogEvent5_WdAssertion(v4);
  }
  for ( i = (struct _KTHREAD **)this[165]; ; i = (struct _KTHREAD **)*i )
  {
    if ( i == this + 165 )
      return 0LL;
    v6 = *(_QWORD *)&a2->Data1 - (_QWORD)i[24];
    if ( *(struct _KTHREAD **)&a2->Data1 == i[24] )
      v6 = *(_QWORD *)a2->Data4 - (_QWORD)i[25];
    if ( !v6 || *((_DWORD *)this + 334) == 1 )
      break;
  }
  return i - 1;
}
