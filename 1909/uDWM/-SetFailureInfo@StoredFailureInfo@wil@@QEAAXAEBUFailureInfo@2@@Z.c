/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180086554
 * Callers:
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180085F50 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18008D5C0 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?NotifyFailure@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800B2880 (-NotifyFailure@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsP.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18003B5B8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180075B84 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180075C18 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180077DEC (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x180077E14 (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rsi
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rsi
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rsi
  const char *v9; // rdx
  __int64 v10; // rsi
  const char *v11; // rdx
  __int64 v12; // rsi
  const char *v13; // rdx
  __int64 v14; // rsi
  const char *v15; // rdx
  __int64 v16; // rsi
  const char *v17; // rdx
  __int64 v18; // rsi
  const char *v19; // rdx
  __int64 v20; // rsi
  const char *v21; // rdx
  unsigned __int64 v22; // rsi
  volatile signed __int32 **v23; // rdi
  _DWORD *v24; // rax
  const unsigned __int16 *v25; // rbp
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v27; // rax
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rcx
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  v4 = wil::details::ResultStringSize(*((wil::details **)a2 + 14), (const unsigned __int16 *)a2);
  v6 = wil::details::ResultStringSize(*((wil::details **)a2 + 11), v5) + v4;
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 2), v7) + v6;
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 13), v9) + v8;
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 10), v11) + v10;
  v14 = wil::details::ResultStringSize(*((wil::details **)a2 + 8), v13) + v12;
  v16 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), v15) + v14;
  v18 = wil::details::ResultStringSize(*((wil::details **)a2 + 5), v17) + v16;
  v20 = wil::details::ResultStringSize(*((wil::details **)a2 + 4), v19) + v18;
  v22 = wil::details::ResultStringSize(*((wil::details **)a2 + 15), v21) + v20;
  v23 = (volatile signed __int32 **)((char *)this + 144);
  v24 = (_DWORD *)*((_QWORD *)this + 18);
  v25 = 0LL;
  if ( !v24 || *v24 != 1 || *((_QWORD *)this + 19) < v22 )
  {
    wil::details::shared_buffer::reset((LPVOID *)this + 18);
    if ( v22 )
    {
      ProcessHeap = GetProcessHeap();
      v27 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, v22 + 4);
      v28 = v27;
      if ( v27 )
      {
        *v27 = 0;
        wil::details::shared_buffer::reset((LPVOID *)this + 18);
        *v23 = v28;
        *((_QWORD *)this + 19) = v22;
        _InterlockedIncrement(v28);
      }
    }
    else
    {
      wil::details::shared_buffer::reset((LPVOID *)this + 18);
    }
  }
  v29 = (__int64)(*v23 + 1);
  if ( (v29 & -(__int64)(*v23 != 0LL)) != 0 )
    v25 = (const unsigned __int16 *)((v29 & -(__int64)(*v23 != 0LL)) + *((_QWORD *)this + 19));
  v30 = wil::details::WriteResultString<unsigned short const *>(
          (char *)(v29 & -(__int64)(*v23 != 0LL)),
          v25,
          *((wil::details **)a2 + 2),
          (_QWORD *)this + 2);
  v31 = wil::details::WriteResultString<char const *>(
          v30,
          (const char *)v25,
          *((wil::details **)a2 + 4),
          (_QWORD *)this + 4);
  v32 = wil::details::WriteResultString<char const *>(
          v31,
          (const char *)v25,
          *((wil::details **)a2 + 5),
          (_QWORD *)this + 5);
  v33 = wil::details::WriteResultString<char const *>(
          v32,
          (const char *)v25,
          *((wil::details **)a2 + 6),
          (_QWORD *)this + 6);
  v34 = wil::details::WriteResultString<char const *>(
          v33,
          (const char *)v25,
          *((wil::details **)a2 + 8),
          (_QWORD *)this + 8);
  v35 = wil::details::WriteResultString<char const *>(
          v34,
          (const char *)v25,
          *((wil::details **)a2 + 15),
          (_QWORD *)this + 15);
  v36 = wil::details::WriteResultString<char const *>(
          v35,
          (const char *)v25,
          *((wil::details **)a2 + 13),
          (_QWORD *)this + 13);
  v37 = wil::details::WriteResultString<unsigned short const *>(
          v36,
          v25,
          *((wil::details **)a2 + 14),
          (_QWORD *)this + 14);
  v38 = wil::details::WriteResultString<char const *>(
          v37,
          (const char *)v25,
          *((wil::details **)a2 + 10),
          (_QWORD *)this + 10);
  wil::details::WriteResultString<unsigned short const *>(v38, v25, *((wil::details **)a2 + 11), (_QWORD *)this + 11);
}
