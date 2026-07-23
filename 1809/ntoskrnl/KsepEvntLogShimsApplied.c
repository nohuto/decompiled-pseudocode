/*
 * XREFs of KsepEvntLogShimsApplied @ 0x14029FE78
 * Callers:
 *     KseDriverLoadImage @ 0x14067F100 (KseDriverLoadImage.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     KsepPoolAllocatePaged @ 0x1400F4D5C (KsepPoolAllocatePaged.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 */

void __fastcall KsepEvntLogShimsApplied(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  wchar_t *v3; // rbx
  unsigned int v4; // r15d
  __int64 v5; // rdi
  unsigned __int16 v8; // r14
  UNICODE_STRING *Paged; // rax
  UNICODE_STRING *v10; // rsi
  wchar_t *p_Length; // rdi
  UNICODE_STRING *v12; // rbx
  unsigned __int16 *v13; // r13
  wchar_t *Buffer; // rcx
  int v15; // ebx
  unsigned int v16; // ecx
  ULONG v17; // eax
  unsigned int v18; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int16 *v20; // [rsp+58h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  __int64 v22; // [rsp+70h] [rbp-19h]
  __int64 v23; // [rsp+78h] [rbp-11h]
  unsigned int *v24; // [rsp+80h] [rbp-9h]
  __int64 v25; // [rsp+88h] [rbp-1h]
  wchar_t *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]

  v3 = 0LL;
  v20 = a1;
  v4 = 0;
  v5 = a3;
  v18 = a3;
  *(_QWORD *)&Destination.Length = 0LL;
  v8 = 0;
  Destination.Buffer = 0LL;
  if ( KseEtwHandle && EtwEventEnabled(KseEtwHandle, &KseShimsApplied) && (_DWORD)v5 && a2 && a1 )
  {
    Paged = (UNICODE_STRING *)KsepPoolAllocatePaged(94 * v5);
    v10 = Paged;
    if ( Paged )
    {
      p_Length = &Paged[v18].Length;
      if ( v18 )
      {
        do
        {
          v12 = &v10[v4];
          *(_QWORD *)&v12->Length = 0LL;
          v12->Buffer = p_Length;
          p_Length += 39;
          v12->MaximumLength = 78;
          RtlStringFromGUIDEx((PGUID)(a2 + 80LL * v4++), v12, 0);
          v8 += v12->Length + 4;
        }
        while ( v4 < v18 );
        v13 = v20;
        if ( v8 )
        {
          Destination.Buffer = (wchar_t *)KsepPoolAllocatePaged(v8);
          Buffer = Destination.Buffer;
          if ( Destination.Buffer )
          {
            v15 = 0;
            Destination.MaximumLength = v8;
            if ( v18 )
            {
              while ( RtlAppendUnicodeStringToString(&Destination, &v10[v15]) >= 0 )
              {
                v16 = v18;
                if ( v15 != v18 - 1 )
                {
                  if ( RtlAppendUnicodeToString(&Destination, L"\n") < 0 )
                    break;
                  v16 = v18;
                }
                if ( ++v15 >= v16 )
                {
                  Buffer = Destination.Buffer;
                  goto LABEL_18;
                }
              }
            }
            else
            {
LABEL_18:
              UserData.Ptr = *((_QWORD *)v13 + 1);
              v17 = *v13 + 2;
              v23 = 4LL;
              UserData.Size = v17;
              v22 = a2 + 68;
              v24 = &v18;
              v25 = 4LL;
              v27 = Destination.Length + 2;
              v26 = Buffer;
              UserData.Reserved = 0;
              v28 = 0;
              EtwWriteEx(KseEtwHandle, &KseShimsApplied, 0LL, 0, 0LL, 0LL, 4u, &UserData);
            }
          }
        }
      }
      ExFreePoolWithTag(v10, 0x6145534Bu);
      _InterlockedIncrement(&dword_14041BC24);
      v3 = Destination.Buffer;
    }
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x6145534Bu);
      _InterlockedIncrement(&dword_14041BC24);
    }
  }
}
