/*
 * XREFs of ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C01654E8
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C013F1A4 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __fastcall ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock(ExclusiveWinlognRequestLock *this)
{
  PUSHLOCKEX::~PUSHLOCKEX(this);
}
