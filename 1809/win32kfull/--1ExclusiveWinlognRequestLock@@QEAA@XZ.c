/*
 * XREFs of ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C0161634
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C00E8644 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __fastcall ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock(ExclusiveWinlognRequestLock *this)
{
  PUSHLOCKEX::~PUSHLOCKEX(this);
}
