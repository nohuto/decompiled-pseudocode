/*
 * XREFs of MiStoreFaultComplete @ 0x140157D60
 * Callers:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiStoreFaultComplete(ULONG_PTR BugCheckParameter2, _DWORD *a2)
{
  __int64 v2; // r9
  int v4; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(BugCheckParameter2 + 88);
  v4 = *(_DWORD *)(BugCheckParameter2 + 80);
  if ( v4 < 0 )
  {
    result = 65537LL;
    if ( v4 == -1073741275 )
    {
      if ( (*(_QWORD *)(48LL * *(_QWORD *)(BugCheckParameter2 + 320) - 0x57FFFFFFFE8LL) & 0x4000000000000000LL) == 0 )
        KeBugCheckEx(0x1Au, 0x6000uLL, BugCheckParameter2, 0xFFFFFFFFC0000225uLL, 0LL);
    }
    else if ( v4 != -1073741791 )
    {
      result = 65539LL;
      goto LABEL_3;
    }
    *(_DWORD *)(BugCheckParameter2 + 80) = -1073741801;
    goto LABEL_3;
  }
  result = ((_DWORD)v2 << 16) | 1u;
  *(_QWORD *)(BugCheckParameter2 + 88) = (unsigned __int64)(unsigned __int16)v2 << 12;
LABEL_3:
  *a2 = result;
  return result;
}
