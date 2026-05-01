/*
 * XREFs of ?SetOldAppLayout@BackOperation@@UEAAXPEAUIAppLayout@@@Z @ 0x1803A7340
 * Callers:
 *     ?SetOldAppLayout@TabletModePositionerOperation@@WII@EAAXPEAUIAppLayout@@@Z @ 0x1800C08A0 (-SetOldAppLayout@TabletModePositionerOperation@@WII@EAAXPEAUIAppLayout@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall BackOperation::SetOldAppLayout(BackOperation *this, struct IAppLayout *a2)
{
  CAppLayoutOperation::SetOldAppLayout(this, a2);
}
