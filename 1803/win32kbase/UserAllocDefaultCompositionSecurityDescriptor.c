/*
 * XREFs of UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001C310
 * Callers:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C00109C0 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     CreateSharedResourceObject @ 0x1C0011D54 (CreateSharedResourceObject.c)
 *     CreateSharedSystemVisualObject @ 0x1C0013680 (CreateSharedSystemVisualObject.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C0142B80 (DCompositionCreateSynchronizationObject.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     AllocAce @ 0x1C001C210 (AllocAce.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     CreateSecurityDescriptor @ 0x1C0060E70 (CreateSecurityDescriptor.c)
 *     AllocateWindowManagerSid @ 0x1C0063B40 (AllocateWindowManagerSid.c)
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1C00643AC (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 */

__int64 __fastcall UserAllocDefaultCompositionSecurityDescriptor(int a1, __int64 *a2)
{
  PSID v2; // rsi
  void *v4; // rdi
  int v6; // eax
  void *v7; // r12
  NTSTATUS InformationToken; // ebx
  int v9; // eax
  __int64 v10; // rax
  PSID *v11; // r14
  __int64 v12; // rax
  PSID *v13; // r14
  __int64 v14; // rax
  __int64 SecurityDescriptor; // rax
  int TokenInformation; // [rsp+30h] [rbp-20h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-1Ch] BYREF
  ULONG v19; // [rsp+38h] [rbp-18h] BYREF
  ULONG v20; // [rsp+3Ch] [rbp-14h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-10h] BYREF
  ULONG AceListLength; // [rsp+98h] [rbp+48h] BYREF
  PSID TokenInformationLength; // [rsp+A0h] [rbp+50h] BYREF
  void *v24; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  TokenHandle = 0LL;
  *a2 = 0LL;
  v4 = 0LL;
  AceListLength = 0;
  v24 = 0LL;
  TokenInformationLength = 0LL;
  v6 = AllocateLocalSystemSid(&v24);
  v7 = v24;
  InformationToken = v6;
  if ( v6 >= 0 )
  {
    v4 = (void *)AllocAce(0LL, 0, 0, 0x10000000, v24, &AceListLength);
    if ( !v4 )
      InformationToken = -1073741801;
    if ( InformationToken >= 0 )
    {
      v9 = AllocateWindowManagerSid(&TokenInformationLength);
      v2 = TokenInformationLength;
      InformationToken = v9;
      if ( v9 >= 0 )
      {
        v10 = AllocAce(v4, 0, 0, 3, TokenInformationLength, &AceListLength);
        if ( v10 )
          v4 = (void *)v10;
        else
          InformationToken = -1073741801;
        if ( InformationToken >= 0 )
        {
          if ( a1 )
          {
            TokenInformation = 0;
            InformationToken = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
            if ( InformationToken < 0 )
              goto LABEL_27;
            ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
            if ( TokenInformation )
            {
              LODWORD(TokenInformationLength) = 0;
              ZwQueryInformationToken(TokenHandle, TokenAppContainerSid, 0LL, 0, (PULONG)&TokenInformationLength);
              v11 = (PSID *)Win32AllocPoolWithQuota((unsigned int)TokenInformationLength, 0x65737355u);
              if ( v11 )
              {
                InformationToken = ZwQueryInformationToken(
                                     TokenHandle,
                                     TokenAppContainerSid,
                                     v11,
                                     (ULONG)TokenInformationLength,
                                     &v19);
                if ( InformationToken >= 0 )
                {
                  v12 = AllocAce(v4, 0, 0, a1, *v11, &AceListLength);
                  if ( v12 )
                    v4 = (void *)v12;
                  else
                    InformationToken = -1073741801;
                }
                Win32FreePool(v11);
              }
              else
              {
                InformationToken = -1073741801;
              }
            }
          }
          if ( InformationToken >= 0 )
          {
            if ( a1 )
            {
              LODWORD(v24) = 0;
              InformationToken = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, (PULONG)&v24);
              v13 = (PSID *)Win32AllocPoolWithQuota((unsigned int)v24, 0x65737355u);
              if ( v13 )
              {
                InformationToken = ZwQueryInformationToken(TokenHandle, TokenUser, v13, (ULONG)v24, &v20);
                if ( InformationToken >= 0 )
                {
                  v14 = AllocAce(v4, 0, 0, a1, *v13, &AceListLength);
                  if ( v14 )
                    v4 = (void *)v14;
                  else
                    InformationToken = -1073741801;
                }
                Win32FreePool(v13);
              }
            }
            if ( InformationToken >= 0 )
            {
              SecurityDescriptor = CreateSecurityDescriptor(v4, AceListLength, 0);
              *a2 = SecurityDescriptor;
              if ( !SecurityDescriptor )
                InformationToken = -1073741801;
            }
          }
        }
      }
    }
  }
LABEL_27:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v7 )
    Win32FreePool(v7);
  if ( v2 )
    Win32FreePool(v2);
  if ( v4 )
    Win32FreePool(v4);
  return (unsigned int)InformationToken;
}
