/*
 * XREFs of ?GetGlobalMotion@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ @ 0x180232BF0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z @ 0x18025DCDC (-UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetGlobalMotion(__int64 a1, __int64 a2)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // r9d
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+6Ch] [rbp+13h]
  __int64 v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  __int64 v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  __int64 v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+9Ch] [rbp+43h]

  if ( *(_BYTE *)(a1 + 92) )
  {
    CInteractionContextTransformHelper::UnTransformOutput(
      (CInteractionContextTransformHelper *)(a1 + 336),
      (const struct InteractionOutput *)(a1 + 32),
      *(_DWORD *)(a1 + 224),
      *(_BYTE *)(a1 + 328),
      (struct InteractionOutput *)(a1 + 96));
    *(_BYTE *)(a1 + 92) = 0;
    if ( dword_180337240 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
      {
        v11 = 0;
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v9 = &v7;
        v12 = a1 + 104;
        v15 = a1 + 108;
        v18 = a1 + 112;
        v7 = a1;
        v10 = 8;
        v13 = v5;
        v16 = v5;
        v19 = v5;
        TlgWrite(v4, &unk_1802DD1B5, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  result = a2;
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 112);
  return result;
}
