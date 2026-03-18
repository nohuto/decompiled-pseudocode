/*
 * XREFs of IopIncrementVpbRefCount @ 0x14007A734
 * Callers:
 *     IopMountInitializeVpb @ 0x1400B5914 (IopMountInitializeVpb.c)
 *     IopReferenceVerifyVpb @ 0x140293CD4 (IopReferenceVerifyVpb.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406822C0 (IoCreateStreamFileObjectEx2.c)
 * Callees:
 *     IopInterlockedIncrementUlong @ 0x14007A6F4 (IopInterlockedIncrementUlong.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementVpbRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  _DWORD *v2; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (_DWORD *)(BugCheckParameter2 + 28);
  if ( a2 )
    result = IopInterlockedIncrementUlong(9uLL, (_DWORD *)(BugCheckParameter2 + 28));
  else
    result = (unsigned int)++*v2;
  if ( (int)result <= 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, (PVOID)0x150);
      v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL);
      if ( v6 )
      {
        IoAddTriageDumpDataBlock(v6, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 56LL));
      }
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 7uLL, (unsigned int)*v2);
  }
  return result;
}
