/*
 * XREFs of ?Clear@?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@QEAAXXZ @ 0x1C00453A8
 * Callers:
 *     ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C0024A9C (--1CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@UEAAPEAXI@Z @ 0x1C0045360 (--_E-$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U-$DoublyLinkedListElementP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::Clear(
        __int64 a1,
        __int64 a2)
{
  _QWORD **v3; // rbx
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax

  v3 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    result = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)result[1] != v3 || (v5 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    --*(_QWORD *)(a1 + 32);
    *result = 0LL;
    result[1] = 0LL;
    (*(void (__fastcall **)(_QWORD *, __int64))*(result - 1))(result - 1, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v6 + 24) = 394LL;
    return (_QWORD *)WdLogEvent5_WdAssertion(v6);
  }
  return result;
}
