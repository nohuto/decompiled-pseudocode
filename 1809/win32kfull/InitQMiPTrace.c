/*
 * XREFs of InitQMiPTrace @ 0x1C01CEE7C
 * Callers:
 *     InitModuleAllocations @ 0x1C0134650 (InitModuleAllocations.c)
 * Callees:
 *     <none>
 */

struct tagQMSG_HISTORY *InitQMiPTrace()
{
  struct tagQMSG_HISTORY *result; // rax
  struct tagQMSG_HISTORY *v1; // rcx

  result = (struct tagQMSG_HISTORY *)(unsigned int)gdwPostMortemLogging;
  if ( (gdwPostMortemLogging & 1) != 0 )
  {
    result = (struct tagQMSG_HISTORY *)gSessionId;
    if ( gSessionId != gServiceSessionId )
    {
      result = (struct tagQMSG_HISTORY *)Win32AllocPoolZInit(86024LL, 1903260501LL);
      gpQmsgHistory = result;
      if ( !result )
      {
LABEL_4:
        gdwPostMortemLogging &= ~1u;
        return result;
      }
      gpQmsgHistory2 = (struct tagQMSG_HISTORY *)Win32AllocPoolZInit(86024LL, 1903260501LL);
      v1 = gpQmsgHistory2;
      if ( !gpQmsgHistory2 )
      {
        result = (struct tagQMSG_HISTORY *)Win32FreePool(gpQmsgHistory);
        gpQmsgHistory = 0LL;
        goto LABEL_4;
      }
      result = gpQmsgHistory;
      *((_DWORD *)gpQmsgHistory + 1) = 512;
      *((_DWORD *)v1 + 1) = 512;
    }
  }
  return result;
}
