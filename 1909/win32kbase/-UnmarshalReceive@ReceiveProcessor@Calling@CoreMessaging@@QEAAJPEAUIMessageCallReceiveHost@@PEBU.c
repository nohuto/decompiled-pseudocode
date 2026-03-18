/*
 * XREFs of ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C009F57C
 * Callers:
 *     CoreUICallReceive @ 0x1C009F4CC (CoreUICallReceive.c)
 * Callees:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C009D9EC (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?NotifyProtocolViolationHelper@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C00BE590 (-NotifyProtocolViolationHelper@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallRece.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C01C9140 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
        CoreMessaging::Calling::ReceiveProcessor *this,
        struct IMessageCallReceiveHost *a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        bool a5,
        char *a6,
        unsigned int a7)
{
  char *v7; // r8
  __int64 v9; // rsi
  struct MsgCallState *v11; // rdi
  int v12; // r9d
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  char *v16; // rax
  unsigned __int16 v17; // dx
  __int64 v18; // rax
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rdx
  int v22; // r8d
  char *v23; // rcx
  char v24; // al
  _BYTE *v25; // rcx
  __int64 v26; // rbp
  unsigned int *v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rcx
  CoreMessaging::Calling::ReceiveProcessor *v31; // rcx
  const struct MsgCallTypeDefinition *v32; // [rsp+50h] [rbp+18h] BYREF
  const unsigned __int8 *v33; // [rsp+58h] [rbp+20h] BYREF

  v33 = a4;
  v32 = a3;
  v7 = a6;
  if ( !a2 )
    return 2147942487LL;
  v9 = a7;
  if ( !a7 )
    return 0LL;
  if ( !a6 )
    return 2147942487LL;
  *((_DWORD *)this + 31) = -1;
  v11 = (CoreMessaging::Calling::ReceiveProcessor *)((char *)this + 120);
  v12 = 0;
  *((_QWORD *)this + 16) = a2;
  *((_DWORD *)this + 30) = 0;
  if ( (((_DWORD)v9 + 3) & 0xFFFFFFFC) != (_DWORD)v9 )
    goto LABEL_48;
  *((_BYTE *)this + 112) = 1;
  v13 = -1LL;
  *((_QWORD *)this + 11) = v7;
  *((_QWORD *)this + 12) = v7;
  if ( &v7[v9] >= v7 )
    v13 = (__int64)&v7[v9];
  *((_QWORD *)this + 13) = v13;
  if ( &v7[v9] < v7 || (unsigned int)v9 < 8 )
    goto LABEL_48;
  if ( (unsigned int)(v13 - (_DWORD)v7) < 8 || (*((_QWORD *)this + 12) = v7 + 8, !v7) )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x82uLL);
  if ( *(_DWORD *)v7 <= (unsigned int)v9 )
  {
    v14 = 0;
    v15 = 0LL;
    while ( *(_WORD *)((char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
                     + v15) != *((_WORD *)v7 + 2) )
    {
      ++v14;
      v15 += 16LL;
      if ( v14 >= 1 )
        goto LABEL_18;
    }
    v16 = (char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
        + 16 * v14;
    if ( !v16 )
    {
LABEL_18:
      *(_DWORD *)v11 = 103;
      goto LABEL_49;
    }
    v17 = *((_WORD *)v7 + 3);
    if ( v17 < *((_WORD *)v16 + 1) )
    {
      *((_QWORD *)this + 17) = v16;
      v18 = *((_QWORD *)v16 + 1);
      v19 = 16LL * v17;
      v20 = v18 + v19 == 0;
      v21 = v18 + v19;
      *((_QWORD *)this + 18) = v21;
      if ( v20 )
      {
        *(_DWORD *)v11 = 201;
      }
      else
      {
        v22 = *(unsigned __int8 *)(v21 + 10);
        *((_DWORD *)this + 20) = v22;
        if ( v22 )
        {
          *(_QWORD *)this = Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_q97IG_nhMC8n79QUys1ZArC4IWs_IRegistrar;
          v23 = &Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_q97IG_nhMC8n79QUys1ZArC4IWs_IRegistrar[*(unsigned __int16 *)(v21 + 8)];
          *(_QWORD *)this = v23;
          if ( v23 >= byte_1C01D70B4
            || v23 < Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_q97IG_nhMC8n79QUys1ZArC4IWs_IRegistrar )
          {
            *(_DWORD *)v11 = 202;
          }
          else
          {
            v24 = *v23;
            v25 = v23 + 1;
            *(_QWORD *)this = v25;
            if ( v24 == (_BYTE)v22 )
            {
              v26 = 0LL;
              *((_QWORD *)this + 1) = v25;
              *((_DWORD *)this + 31) = 0;
              while ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) >= 4 )
              {
                v27 = (unsigned int *)*((_QWORD *)this + 12);
                *((_QWORD *)this + 12) = v27 + 1;
                if ( !v27 )
                  break;
                v28 = *v27;
                *((_DWORD *)this + 21) = *v27;
                if ( v28 > 0xFFFFFFFC )
                  goto LABEL_46;
                if ( v28 )
                {
                  v29 = (v28 + 3) & 0xFFFFFFFC;
                  if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) >= v29 )
                  {
                    v30 = *((_QWORD *)this + 12);
                    *((_QWORD *)this + 12) = v30 + v29;
                  }
                  else
                  {
                    v30 = 0LL;
                  }
                  *((_QWORD *)this + 51) = v30;
                  if ( !v30 )
                    goto LABEL_48;
                }
                else
                {
                  *((_QWORD *)this + 51) = 0LL;
                }
                v12 = CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(
                        this,
                        (unsigned int *)&v33,
                        &a5,
                        (unsigned int *)&v32);
                if ( v12 < 0 )
                  goto LABEL_49;
                if ( (_DWORD)v33 != *((_DWORD *)this + 21) && (_DWORD)v33 )
                  goto LABEL_46;
                *((_QWORD *)this + v26 + 19) = *((_QWORD *)this + 51);
                v26 = (unsigned int)(v26 + 1);
                if ( a5 )
                {
                  *((_QWORD *)this + v26 + 19) = (unsigned int)v32;
                  v26 = (unsigned int)(v26 + 1);
                }
                if ( ++*((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
                  goto LABEL_44;
              }
            }
            *(_DWORD *)v11 = 105;
          }
        }
        else
        {
LABEL_44:
          if ( *((_DWORD *)this + 24) - *((_DWORD *)this + 22) == (_DWORD)v9 )
            v12 = 0;
          else
LABEL_46:
            *(_DWORD *)v11 = 106;
        }
      }
    }
    else
    {
      *(_DWORD *)v11 = 104;
    }
  }
  else
  {
LABEL_48:
    *(_DWORD *)v11 = 102;
  }
LABEL_49:
  v31 = (CoreMessaging::Calling::ReceiveProcessor *)*(unsigned int *)v11;
  if ( (_DWORD)v31 )
  {
    if ( (unsigned int)((_DWORD)v31 - 100) > 0x63 && (unsigned int)((_DWORD)v31 - 200) > 0x63 )
      CoreMessaging::Calling::FailFast::Error(
        (ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp",
        0x16EuLL);
    return (unsigned int)CoreMessaging::Calling::ReceiveProcessor::NotifyProtocolViolationHelper(
                           v31,
                           *((struct IMessageCallReceiveHost **)this + 16),
                           v11);
  }
  return (unsigned int)v12;
}
