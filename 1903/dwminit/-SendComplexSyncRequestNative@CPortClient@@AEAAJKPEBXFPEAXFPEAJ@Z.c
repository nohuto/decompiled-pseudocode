/*
 * XREFs of ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x180004B00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800038E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180003C54 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x18000480C (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     memcpy_0 @ 0x1800065B9 (memcpy_0.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequestNative(
        HANDLE *this,
        ULONG a2,
        const void *a3,
        __int16 a4,
        void *a5,
        __int16 a6,
        int *a7)
{
  __int16 v7; // ax
  unsigned int v8; // ebx
  unsigned __int16 v12; // ax
  struct _PORT_MESSAGE *v14; // rax
  struct _PORT_MESSAGE *v15; // rdi
  NTSTATUS v16; // eax
  int v17; // eax

  v7 = a6;
  v8 = 0;
  if ( a4 > a6 )
    v7 = a4;
  v12 = v7 + 48;
  if ( v12 < 0x2B0u )
    v12 = 688;
  v14 = (struct _PORT_MESSAGE *)HeapAlloc(this[10], 8u, v12);
  v15 = v14;
  if ( v14 )
  {
    v14[1].u1.Length = a2;
    v14->u1.s1.DataLength = a4 + 8;
    v14->u1.s1.TotalLength = a4 + 48;
    if ( (__int16)(a4 + 48) > 512 )
      AssertW(
        0LL,
        L"pMsg->u1.s1.TotalLength <= 512",
        L"LpcVerifyOutgoingPayloadSize",
        L"onecoreuap\\windows\\dwm\\common\\shared\\lpcshared.h",
        0x136u);
    memcpy_0(&v15[1].DoNotUseThisField, a3, a4);
    v16 = NtRequestWaitReplyPort(this[6], v15, v15);
    v17 = CPortClient::CheckStatus((CPortClient *)this, v16);
    if ( v17 >= 0 )
    {
      if ( (v15[1].u2.ZeroInit & 0x80000000) == 0 && a5 && a6 )
      {
        if ( v15->u1.s1.DataLength == a6 + 8 )
        {
          memcpy_0(a5, &v15[1].DoNotUseThisField, a6);
        }
        else
        {
          v8 = -2147024872;
          MilInstrumentationCheckHR_MaybeFailFast(
            1u,
            &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
            8LL,
            0x80070018,
            0xBAu);
        }
      }
      *a7 = v15[1].u2.ZeroInit;
    }
    else
    {
      v8 = v17 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        1u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        8LL,
        v17 | 0x10000000,
        0xB2u);
    }
    HeapFree(this[10], 0, v15);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, 0x8007000E, 0xA8u);
  }
  return v8;
}
