/*
 * XREFs of PopBcdRegenerateResumeObject @ 0x1408B60EC
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14073D8C0 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14073E530 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdQueryObject @ 0x14073E940 (BcdQueryObject.c)
 *     PopBcdReadElement @ 0x14073EAA4 (PopBcdReadElement.c)
 *     BcdCloseObject @ 0x14073F218 (BcdCloseObject.c)
 *     BcdCreateObject @ 0x14092DEEC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14092DF84 (BcdDeleteObject.c)
 *     BcdSetElementData @ 0x14092E6F4 (BcdSetElementData.c)
 */

__int64 __fastcall PopBcdRegenerateResumeObject(void *a1, void *a2, _QWORD *a3)
{
  PVOID v5; // rsi
  int v6; // ebx
  HANDLE v7; // rdi
  NTSTATUS v8; // eax
  ULONG BufferSize; // [rsp+20h] [rbp-50h] BYREF
  ULONG v11[3]; // [rsp+24h] [rbp-4Ch] BYREF
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-40h] BYREF
  PVOID P; // [rsp+38h] [rbp-38h] BYREF
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+40h] [rbp-30h] BYREF
  GUID v15; // [rsp+48h] [rbp-28h] BYREF
  GUID Identifier; // [rsp+58h] [rbp-18h] BYREF

  Description.Version = 1;
  BufferSize = 0;
  memset(v11, 0, sizeof(v11));
  BcdObjectHandle = 0LL;
  v5 = 0LL;
  *(_QWORD *)&Identifier.Data1 = 0LL;
  *(_QWORD *)Identifier.Data4 = 0LL;
  v15 = (GUID)0LL;
  P = 0LL;
  Description.Type = 270532612;
  v6 = BcdCreateObject(a1, 0LL, &Description, &BcdObjectHandle);
  if ( v6 < 0 )
  {
    v7 = BcdObjectHandle;
  }
  else
  {
    v6 = PopBcdReadElement(a2, 0x12000004u, &v11[1], &BufferSize);
    if ( v6 < 0 )
    {
      v7 = BcdObjectHandle;
    }
    else
    {
      PopBcdReadElement(a2, 0x12000005u, &P, v11);
      v7 = BcdObjectHandle;
      v8 = BcdSetElementData(BcdObjectHandle, 0x12000004u, *(PVOID *)&v11[1], BufferSize);
      v5 = P;
      v6 = v8;
      if ( v8 >= 0 )
      {
        if ( !P || (v6 = BcdSetElementData(v7, 0x12000005u, P, v11[0]), v6 >= 0) )
        {
          v6 = PopBcdSetDefaultResumeObjectElements(v7, a2);
          if ( v6 >= 0 )
          {
            v15 = GUID_RESUME_LOADER_SETTINGS_GROUP;
            v6 = BcdSetElementData(v7, 0x14000006u, &v15, 0x10u);
            if ( v6 >= 0 )
            {
              v6 = BcdQueryObject(v7, 0, 0LL, &Identifier);
              if ( v6 >= 0 )
              {
                v6 = BcdSetElementData(a2, 0x23000003u, &Identifier, 0x10u);
                if ( v6 >= 0 )
                {
                  *a3 = v7;
                  v7 = 0LL;
                }
              }
            }
          }
        }
      }
    }
    if ( *(_QWORD *)&v11[1] )
      ExFreePoolWithTag(*(PVOID *)&v11[1], 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  if ( v7 )
  {
    if ( v6 < 0 )
      BcdDeleteObject(v7);
    else
      BcdCloseObject(v7);
  }
  return (unsigned int)v6;
}
