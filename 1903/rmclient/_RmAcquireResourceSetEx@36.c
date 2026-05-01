/*
 * XREFs of _RmAcquireResourceSetEx@36 @ 0x10011280
 * Callers:
 *     <none>
 * Callees:
 *     _RmpClientAcquireResourceSet@36 @ 0x100114D8 (_RmpClientAcquireResourceSet@36.c)
 */

int __thiscall RmAcquireResourceSetEx(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return RmpClientAcquireResourceSet(a4, a5, a6, a7, a8, this, a10);
}
