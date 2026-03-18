/*
 * XREFs of ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C007F89C
 * Callers:
 *     ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1C007F244 (-PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z.c)
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C007F71C (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 * Callees:
 *     ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1C007F244 (-PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z.c)
 *     ?PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXHPEAI@Z @ 0x1C007FA14 (-PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXHPEAI@Z.c)
 *     ?PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIHPEAI@Z @ 0x1C007FA54 (-PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIHPEAI@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0186744 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

int __fastcall CoreMessaging::Calling::SendProcessor::ReadParameterSize(
        CoreMessaging::Calling::SendProcessor *this,
        char **a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int8 *v7; // rax
  int v8; // r10d
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  const void *v14; // rdx
  int result; // eax
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  int v22; // r10d
  const unsigned __int16 *v23; // rdx
  int v24; // r10d
  const void *v25; // r10
  unsigned int v26; // edx
  char *v27; // rax

  *a7 = 0;
  v7 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v8 = *v7;
  *((_QWORD *)this + 1) = v7 + 1;
  if ( (unsigned __int8)v8 > 9u )
  {
    v9 = v8 - 10;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
          {
            if ( a3 )
            {
              v23 = 0LL;
            }
            else
            {
              *a2 += 8;
              v23 = (const unsigned __int16 *)*((_QWORD *)*a2 - 1);
            }
            result = CoreMessaging::Calling::SendProcessor::PrepareLPCWSTR(this, v23, a4, a3, a7);
LABEL_10:
            if ( result < 0 )
              return result;
            return 0;
          }
          v13 = v12 - 1;
          if ( !v13 )
          {
            if ( a3 )
            {
              v14 = 0LL;
            }
            else
            {
              *a2 += 8;
              v14 = (const void *)*((_QWORD *)*a2 - 1);
            }
            result = CoreMessaging::Calling::SendProcessor::PrepareStruct(this, v14, a3, a7);
            goto LABEL_10;
          }
          v24 = v13 - 1;
          if ( !v24 )
            CoreMessaging::Calling::FailFast::Error(
              (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
              0x368uLL);
          if ( v24 == 1 )
          {
            if ( a3 )
            {
              v25 = 0LL;
              v26 = 0;
            }
            else
            {
              *a2 += 8;
              v25 = (const void *)*((_QWORD *)*a2 - 1);
              v27 = *a2 + 8;
              *a2 = v27;
              v26 = *((_DWORD *)v27 - 2);
            }
            result = CoreMessaging::Calling::SendProcessor::PrepareArray(this, v25, v26, a4, a5, a6, a3, a7);
            goto LABEL_10;
          }
LABEL_41:
          result = -2147024809;
          *((_DWORD *)this + 30) = 205;
          return result;
        }
        goto LABEL_33;
      }
LABEL_44:
      if ( !a3 )
        *a2 += 8;
      *a7 = 2;
      return 0;
    }
LABEL_29:
    if ( !a3 )
      *a2 += 8;
    *a7 = 8;
    return 0;
  }
  if ( (_BYTE)v8 == 9 )
  {
LABEL_21:
    if ( !a3 )
      *a2 += 8;
    *a7 = 4;
    return 0;
  }
  v16 = v8 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( !v17 )
      goto LABEL_44;
    v18 = v17 - 1;
    if ( !v18 )
      goto LABEL_21;
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_29;
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_44;
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 != 1 )
          goto LABEL_41;
        goto LABEL_29;
      }
      goto LABEL_21;
    }
  }
LABEL_33:
  if ( !a3 )
    *a2 += 8;
  *a7 = 1;
  return 0;
}
