/*
 * XREFs of _lambda_7e9488ee95e6f7ac44c162998ae46b34_::operator() @ 0x18010258C
 * Callers:
 *     ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x18004592C (-CheckAndLogTelemetry@AudioJournal@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x180102990 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 *     ?AddKeyArray@JsonWriter@@QEAAJPEBG@Z @ 0x180144C40 (-AddKeyArray@JsonWriter@@QEAAJPEBG@Z.c)
 *     ?AddKeyObject@JsonWriter@@QEAAJPEBG@Z @ 0x180144CF4 (-AddKeyObject@JsonWriter@@QEAAJPEBG@Z.c)
 *     ?Commit@JsonWriter@@QEAAJXZ @ 0x1801450EC (-Commit@JsonWriter@@QEAAJXZ.c)
 *     ?EndArray@JsonWriter@@QEAAJXZ @ 0x180145140 (-EndArray@JsonWriter@@QEAAJXZ.c)
 *     ?EndObject@JsonWriter@@QEAAJXZ @ 0x180145198 (-EndObject@JsonWriter@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_7e9488ee95e6f7ac44c162998ae46b34_::operator()(_QWORD **a1)
{
  int v2; // eax
  unsigned int v3; // esi
  __int64 v4; // rdx
  AudioJournal *v5; // rcx
  AudioJournal *v6; // rcx
  AudioJournal *v7; // rcx
  __int64 v8; // r9
  LPSTREAM v9; // rcx
  LPSTREAM ppstm; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v13[16]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+68h] [rbp-A0h]
  LPSTREAM v15; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v16[32]; // [rsp+B0h] [rbp-58h] BYREF
  int v17; // [rsp+130h] [rbp+28h]
  int v18; // [rsp+134h] [rbp+2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v12[1] = -2LL;
  LODWORD(v12[0]) = 0;
  ppstm = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppstm);
  CreateStreamOnHGlobal(0LL, 1, &ppstm);
  (*(void (__fastcall **)(LPSTREAM, __int64))(*(_QWORD *)ppstm + 48LL))(ppstm, 8096LL);
  v15 = ppstm;
  if ( ppstm )
    (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)ppstm + 8LL))(ppstm);
  v17 = 0;
  v18 = 0;
  memset_0(v16, 0, sizeof(v16));
  v2 = (*(__int64 (__fastcall **)(LPSTREAM, const char *, __int64))(*(_QWORD *)v15 + 32LL))(v15, "{", 1LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 538LL;
    goto LABEL_42;
  }
  v16[v17++] = 0;
  v2 = JsonWriter::AddKeyObject((JsonWriter *)&v15, L"audiojournal");
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 540LL;
LABEL_42:
    v8 = (unsigned int)v2;
    goto LABEL_43;
  }
  v2 = JsonWriter::AddKeyArray((JsonWriter *)&v15, L"render");
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 542LL;
    goto LABEL_42;
  }
  v2 = AudioJournal::AddStreamInfoToJson(
         v5,
         (struct AudioJournal::StreamInfo *)(*a1 + 29),
         3,
         (struct JsonWriter *)&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 543LL;
    goto LABEL_42;
  }
  v2 = JsonWriter::EndArray((JsonWriter *)&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 544LL;
    goto LABEL_42;
  }
  v2 = JsonWriter::AddKeyArray((JsonWriter *)&v15, L"capture");
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 546LL;
    goto LABEL_42;
  }
  v2 = AudioJournal::AddStreamInfoToJson(
         v6,
         (struct AudioJournal::StreamInfo *)(*a1 + 104),
         2,
         (struct JsonWriter *)&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 547LL;
    goto LABEL_42;
  }
  v2 = JsonWriter::EndArray((JsonWriter *)&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 548LL;
    goto LABEL_42;
  }
  v2 = JsonWriter::AddKeyArray((JsonWriter *)&v15, L"unknown");
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 550LL;
    goto LABEL_42;
  }
  v2 = AudioJournal::AddStreamInfoToJson(
         v7,
         (struct AudioJournal::StreamInfo *)(*a1 + 154),
         1,
         (struct JsonWriter *)&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 551LL;
    goto LABEL_42;
  }
  v2 = JsonWriter::EndArray((JsonWriter *)&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 552LL;
    goto LABEL_42;
  }
  v2 = JsonWriter::EndObject((JsonWriter *)&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 554LL;
    goto LABEL_42;
  }
  v2 = JsonWriter::Commit((JsonWriter *)&v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 555LL;
    goto LABEL_42;
  }
  v2 = (*(__int64 (__fastcall **)(LPSTREAM, _BYTE *, _QWORD))(*(_QWORD *)ppstm + 96LL))(ppstm, v13, 0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 557LL;
    goto LABEL_42;
  }
  if ( v14 <= 0x1FA0 )
  {
    *a1[1] = operator new(v14 + 1);
    if ( *a1[1] )
    {
      v2 = (*(__int64 (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 563LL;
        goto LABEL_42;
      }
      v2 = (*(__int64 (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)ppstm + 24LL))(
             ppstm,
             *a1[1],
             v14,
             v12);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 564LL;
        goto LABEL_42;
      }
      if ( LODWORD(v12[0]) <= v14 )
      {
        *(_BYTE *)(LODWORD(v12[0]) + *a1[1]) = 0;
        v3 = 0;
        goto LABEL_44;
      }
      v3 = -2147418113;
      v8 = 2147549183LL;
      v4 = 566LL;
    }
    else
    {
      v3 = -2147024882;
      v8 = 2147942414LL;
      v4 = 561LL;
    }
  }
  else
  {
    v3 = -2147418113;
    v8 = 2147549183LL;
    v4 = 559LL;
  }
LABEL_43:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
    (const char *)v8);
LABEL_44:
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppstm);
  return v3;
}
