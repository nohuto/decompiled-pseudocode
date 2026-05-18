/*
 * XREFs of _Init_thread_footer @ 0x180126888
 * Callers:
 *     sub_18003D500 @ 0x18003D500 (sub_18003D500.c)
 *     sub_18003EB9C @ 0x18003EB9C (sub_18003EB9C.c)
 *     sub_1800456E0 @ 0x1800456E0 (sub_1800456E0.c)
 *     sub_180045920 @ 0x180045920 (sub_180045920.c)
 *     sub_180056B44 @ 0x180056B44 (sub_180056B44.c)
 *     sub_180056C48 @ 0x180056C48 (sub_180056C48.c)
 *     sub_180056DF8 @ 0x180056DF8 (sub_180056DF8.c)
 *     sub_180056E7C @ 0x180056E7C (sub_180056E7C.c)
 *     sub_180057878 @ 0x180057878 (sub_180057878.c)
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 *     sub_18005DF60 @ 0x18005DF60 (sub_18005DF60.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18005E36C @ 0x18005E36C (sub_18005E36C.c)
 *     sub_18005E510 @ 0x18005E510 (sub_18005E510.c)
 *     sub_18006062C @ 0x18006062C (sub_18006062C.c)
 *     sub_18006079C @ 0x18006079C (sub_18006079C.c)
 *     sub_1800D0D88 @ 0x1800D0D88 (sub_1800D0D88.c)
 *     sub_1800D43B0 @ 0x1800D43B0 (sub_1800D43B0.c)
 *     sub_1800D8C58 @ 0x1800D8C58 (sub_1800D8C58.c)
 *     sub_1801104D0 @ 0x1801104D0 (sub_1801104D0.c)
 *     sub_18011D104 @ 0x18011D104 (sub_18011D104.c)
 *     sub_18011D188 @ 0x18011D188 (sub_18011D188.c)
 *     sub_18011D230 @ 0x18011D230 (sub_18011D230.c)
 *     sub_18011D2B4 @ 0x18011D2B4 (sub_18011D2B4.c)
 *     sub_18011D32C @ 0x18011D32C (sub_18011D32C.c)
 *     sub_180123EB8 @ 0x180123EB8 (sub_180123EB8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&CriticalSection);
  v2 = (unsigned int)TlsIndex;
  *a1 = ++dword_18025F270;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 44LL) = dword_18025F270;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
