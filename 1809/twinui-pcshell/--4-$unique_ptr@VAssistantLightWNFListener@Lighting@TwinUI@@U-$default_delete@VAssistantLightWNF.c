/*
 * XREFs of ??4?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180187FFC
 * Callers:
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18018A2BC (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_18018A2BC.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18039A5F4 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

TwinUI::Lighting::AssistantLightManager ***__fastcall wistd::unique_ptr<TwinUI::Lighting::AssistantLightWNFListener,wistd::default_delete<TwinUI::Lighting::AssistantLightWNFListener>>::operator=(
        TwinUI::Lighting::AssistantLightManager ***a1,
        TwinUI::Lighting::AssistantLightManager ***a2)
{
  TwinUI::Lighting::AssistantLightManager **v3; // rsi
  TwinUI::Lighting::AssistantLightManager **v4; // rdi
  TwinUI::Lighting::AssistantLightManager *v5; // rbp

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    if ( v3 != *a1 )
    {
      if ( v4 )
      {
        v5 = v4[1];
        if ( v5 )
        {
          TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v4[1]);
          operator delete(v5, (const struct std::nothrow_t *)0x70);
        }
        operator delete(v4, (const struct std::nothrow_t *)0x10);
      }
      *a1 = v3;
    }
  }
  return a1;
}
