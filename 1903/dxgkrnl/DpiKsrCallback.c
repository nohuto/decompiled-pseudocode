/*
 * XREFs of DpiKsrCallback @ 0x1C02A92D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02A84BC (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     ?DpiKsrPrepare@@YAXPEAX@Z @ 0x1C02A8C78 (-DpiKsrPrepare@@YAXPEAX@Z.c)
 */

void __fastcall DpiKsrCallback(_BYTE *CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // edx
  _DWORD v4[14]; // [rsp+20h] [rbp-38h] BYREF

  if ( (_DWORD)Argument1 )
  {
    v3 = (_DWORD)Argument1 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        if ( qword_1C00A2C38 )
        {
          DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrRestoreMemoryCallback, 0LL);
          *(_BYTE *)(qword_1C00A2C38 + 28) = 1;
        }
      }
    }
    else
    {
      CallbackContext[1264] = 0;
      memset(v4, 0, 0x28uLL);
      v4[0] = 1;
      DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, v4);
    }
  }
  else
  {
    DpiKsrPrepare(CallbackContext);
  }
}
