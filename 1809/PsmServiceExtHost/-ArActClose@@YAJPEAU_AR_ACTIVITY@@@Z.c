/*
 * XREFs of ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006FCE4
 * Callers:
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x18006F650 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006F8DC (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArActClose(struct _AR_ACTIVITY *a1)
{
  __int64 result; // rax

  result = HamCloseActivity(*(_QWORD *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 72), *((_QWORD *)a1 + 5));
  if ( (int)result >= 0 )
  {
    *((_BYTE *)a1 + 52) = 2;
    return 0LL;
  }
  return result;
}
