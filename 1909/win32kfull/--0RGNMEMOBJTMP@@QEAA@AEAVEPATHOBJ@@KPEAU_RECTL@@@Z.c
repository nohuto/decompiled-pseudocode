/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C016661C
 * Callers:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(
        RGNMEMOBJTMP *this,
        struct EPATHOBJ *a2,
        unsigned int a3,
        struct _RECTL *a4)
{
  *((_DWORD *)this + 2) = 0;
  RGNMEMOBJ::vCreate(this, a2, a3, 0LL);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
