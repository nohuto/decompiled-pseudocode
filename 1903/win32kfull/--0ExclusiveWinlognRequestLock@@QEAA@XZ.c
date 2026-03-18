/*
 * XREFs of ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C01654C4
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C013F1A4 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

ExclusiveWinlognRequestLock *__fastcall ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock(
        ExclusiveWinlognRequestLock *this)
{
  PUSHLOCKEX::PUSHLOCKEX(this, (struct _EX_PUSH_LOCK *)&UmfdWinLogonRequestLock);
  return this;
}
