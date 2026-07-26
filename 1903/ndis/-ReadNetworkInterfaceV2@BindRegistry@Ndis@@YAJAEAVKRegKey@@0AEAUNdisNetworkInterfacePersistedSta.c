/*
 * XREFs of ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0101424
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00FC168 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0023C4C (ndisIfReadNetworkGuidFromKey.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C002EFDC (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0100980 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0100DC0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01017B8 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     KRegKey::QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___ @ 0x1C0101AF4 (KRegKey--QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C0107EE8 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceV2(
        struct KRegKey *this,
        struct KRegKey *a2,
        struct KRegKey *a3,
        struct NdisNetworkInterfacePersistedState *a4)
{
  __int64 result; // rax
  signed int Uint64; // edi
  const char *v9; // rax
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 v12; // rcx
  const char *v13; // rax
  __int16 v14; // r15
  int v15; // r9d
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  const char *v18; // [rsp+48h] [rbp-8h]
  unsigned int v19; // [rsp+90h] [rbp+40h] BYREF
  struct KRegKey *v20; // [rsp+A0h] [rbp+50h] BYREF

  v20 = this;
  result = NetSetupPropertyBag::ReadString(&v20, &unk_1C00CC340, a3);
  if ( (int)result < 0 )
    return result;
  result = NetSetupPropertyBag::ReadString(&v20, &unk_1C00CC310, &a3[1]);
  if ( (int)result < 0 )
    return result;
  Uint64 = NetSetupPropertyBag::ReadUint32((void ***)&v20, (const struct _NETSETUPPROPKEY *)&unk_1C00CC2F8, &v19);
  if ( Uint64 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)Uint64;
    v15 = 19;
LABEL_53:
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2,
      22,
      v15,
      (struct _GUID *)&WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
      Uint64);
    return (unsigned int)Uint64;
  }
  LOWORD(a3[2].m_ptr) = v19;
  Uint64 = NetSetupPropertyBag::ReadUint64(
             (NetSetupPropertyBag *)&v20,
             (const struct _NETSETUPPROPKEY *)&unk_1C00CC280,
             (unsigned __int64 *)&a3[3]);
  if ( Uint64 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)Uint64;
    v15 = 20;
    goto LABEL_53;
  }
  if ( (int)NetSetupPropertyBag::ReadUint32(
              (void ***)&v20,
              (const struct _NETSETUPPROPKEY *)&unk_1C00CC298,
              (unsigned int *)&a3[7]) < 0 )
    LODWORD(a3[7].m_ptr) = 0;
  if ( (int)NetSetupPropertyBag::ReadUint32(
              (void ***)&v20,
              (const struct _NETSETUPPROPKEY *)&unk_1C00CC268,
              (unsigned int *)&a3[7].m_ptr + 1) < 0 )
    HIDWORD(a3[7].m_ptr) = 0;
  result = NetSetupPropertyBag::ReadBoolean(
             (void ***)&v20,
             (const struct _NETSETUPPROPKEY *)&unk_1C00CC2E0,
             (bool *)&a3[16].m_ptr + 5);
  if ( (int)result >= 0 )
  {
    result = NetSetupPropertyBag::ReadBoolean(
               (void ***)&v20,
               (const struct _NETSETUPPROPKEY *)&unk_1C00CC3A0,
               (bool *)&a3[16].m_ptr + 4);
    if ( (int)result >= 0 )
    {
      result = NetSetupPropertyBag::ReadUint32(
                 (void ***)&v20,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00CC250,
                 (unsigned int *)&a3[4]);
      if ( (_DWORD)result == -1073741772 )
      {
        LODWORD(a3[4].m_ptr) = 0;
      }
      else if ( (_DWORD)result )
      {
        return result;
      }
      LOWORD(a3[2].m_ptr) = v19;
      HIDWORD(a3[6].m_ptr) = 0;
      result = ndisIfReadNetworkGuidFromKey(this, (struct _GUID *)((char *)&a3[4].m_ptr + 4));
      if ( (int)result < 0 )
        return result;
      if ( a2->m_ptr )
      {
        v17 = 0LL;
        v18 = 0LL;
        v9 = L"CurrentAddress";
        LOWORD(a3[8].m_ptr) = 0;
        v10 = 0x7FFFLL;
        do
        {
          if ( !*(_WORD *)v9 )
            break;
          v9 += 2;
          --v10;
        }
        while ( v10 );
        Uint64 = v10 == 0 ? 0xC000000D : 0;
        if ( v10 )
          v11 = 0x7FFF - v10;
        else
          v11 = 0;
        if ( v10 )
        {
          v18 = L"CurrentAddress";
          LOWORD(v17) = 2 * v11;
          WORD1(v17) = 2 * v11 + 2;
          Uint64 = KRegKey::QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___(a2, &v17);
        }
        if ( Uint64 != -1073741772 )
        {
          if ( Uint64 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Sd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0x16u,
                0x12u,
                (struct _GUID *)&WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
                (const wchar_t *)L"CurrentAddress",
                Uint64);
          }
          else
          {
            Uint64 = 0;
          }
          if ( Uint64 < 0 )
            return (unsigned int)Uint64;
        }
        v17 = 0LL;
        v18 = 0LL;
        v12 = 0x7FFFLL;
        v13 = L"PermanentAddress";
        WORD1(a3[12].m_ptr) = 0;
        do
        {
          if ( !*(_WORD *)v13 )
            break;
          v13 += 2;
          --v12;
        }
        while ( v12 );
        Uint64 = v12 == 0 ? 0xC000000D : 0;
        if ( v12 )
          v14 = 0x7FFF - v12;
        else
          v14 = 0;
        if ( v12 )
        {
          v18 = L"PermanentAddress";
          LOWORD(v17) = 2 * v14;
          WORD1(v17) = 2 * v14 + 2;
          Uint64 = KRegKey::QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___(a2, &v17);
        }
        if ( Uint64 != -1073741772 )
        {
          if ( Uint64 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v16) = Uint64;
              WPP_RECORDER_SF_Sd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0x16u,
                0x12u,
                (struct _GUID *)&WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
                (const wchar_t *)L"PermanentAddress",
                v16);
            }
          }
          else
          {
            Uint64 = 0;
          }
          if ( Uint64 < 0 )
            return (unsigned int)Uint64;
        }
      }
      BYTE6(a3[16].m_ptr) = 1;
      result = NetSetupPropertyBag::ReadBoolean(
                 (void ***)&v20,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00CC328,
                 (bool *)&a3[16].m_ptr + 7);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
      }
      else if ( (int)result < 0 )
      {
        return result;
      }
      result = NetSetupPropertyBag::ReadUint32(
                 (void ***)&v20,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00CC388,
                 (unsigned int *)&a3[17]);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
      }
      else if ( (int)result < 0 )
      {
        return result;
      }
      result = NetSetupPropertyBag::ReadUint32(
                 (void ***)&v20,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00CC370,
                 (unsigned int *)&a3[17].m_ptr + 1);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
      }
      else if ( (int)result < 0 )
      {
        return result;
      }
      result = NetSetupPropertyBag::ReadUint32(
                 (void ***)&v20,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00CC358,
                 (unsigned int *)&a3[18]);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
        return 0LL;
      }
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
