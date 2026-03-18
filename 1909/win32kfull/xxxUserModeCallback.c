/*
 * XREFs of xxxUserModeCallback @ 0x1C021FB04
 * Callers:
 *     xxxMNStartMenu @ 0x1C0210998 (xxxMNStartMenu.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C01647DC (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0164800 (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 xxxUserModeCallback(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, ...)
{
  int v7; // ebx
  LeaveEnterCrit *v8; // rcx
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+28h] BYREF
  va_list va; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v11 = va_arg(va1, _QWORD);
  v10 = a4;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)va);
  EtwTraceBeginCallback(a1);
  v7 = KeUserModeCallback(a1, a2, a3, &v10, (__int64 *)va);
  EtwTraceEndCallback(a1);
  LeaveEnterCrit::~LeaveEnterCrit(v8);
  if ( v7 >= 0 && (_DWORD)v11 )
    return (unsigned int)-1073741823;
  return (unsigned int)v7;
}
