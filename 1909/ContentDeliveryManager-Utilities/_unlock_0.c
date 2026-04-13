/*
 * XREFs of _unlock_0 @ 0x1800CB29D
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800AEAE4 (--1_Lockit@std@@QEAA@XZ.c)
 *     _onexit_0 @ 0x1800CAE80 (_onexit_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall unlock_0(__int64 a1)
{
  return _unlock(a1);
}
