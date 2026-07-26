/*
 * XREFs of ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C00C5470
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00B3EDC (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C00E262C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C001C9E8 (ndisIfReadNetworkGuidFromKey.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     WPP_SF_Sd @ 0x1C0051C6C (WPP_SF_Sd.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C00C4C74 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C5000 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C00C6F40 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C00C71E4 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     KRegKey::QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___ @ 0x1C00C79C4 (KRegKey--QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceV2(
        struct KRegKey *this,
        struct KRegKey *a2,
        struct KRegKey *a3,
        struct NdisNetworkInterfacePersistedState *a4)
{
  __int64 result; // rax
  int Uint64; // edi
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned __int16 v14; // cx
  unsigned int v15; // edi
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  const wchar_t *v17; // [rsp+28h] [rbp-20h]
  unsigned int v18; // [rsp+70h] [rbp+28h] BYREF
  struct KRegKey *v19; // [rsp+80h] [rbp+38h] BYREF

  v19 = this;
  result = NetSetupPropertyBag::ReadString(
             (NetSetupPropertyBag *)&v19,
             (const struct _NETSETUPPROPKEY *)&unk_1C00888C0,
             &a3->m_ptr);
  if ( (int)result < 0 )
    return result;
  result = NetSetupPropertyBag::ReadString(
             (NetSetupPropertyBag *)&v19,
             (const struct _NETSETUPPROPKEY *)&unk_1C00888A8,
             &a3[1].m_ptr);
  if ( (int)result < 0 )
    return result;
  Uint64 = NetSetupPropertyBag::ReadUint32(
             (NetSetupPropertyBag *)&v19,
             (const struct _NETSETUPPROPKEY *)&unk_1C0088890,
             &v18);
  if ( Uint64 < 0 )
  {
    if ( (unsigned __int8)byte_1C00A0265 >= 2u )
    {
      v14 = 19;
LABEL_47:
      WPP_SF_D(v14, &WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids, Uint64);
    }
    return (unsigned int)Uint64;
  }
  LOWORD(a3[2].m_ptr) = v18;
  Uint64 = NetSetupPropertyBag::ReadUint64(
             (NetSetupPropertyBag *)&v19,
             (const struct _NETSETUPPROPKEY *)&unk_1C0088878,
             (unsigned __int64 *)&a3[3]);
  if ( Uint64 < 0 )
  {
    if ( (unsigned __int8)byte_1C00A0265 >= 2u )
    {
      v14 = 20;
      goto LABEL_47;
    }
    return (unsigned int)Uint64;
  }
  if ( (int)NetSetupPropertyBag::ReadUint32(
              (NetSetupPropertyBag *)&v19,
              (const struct _NETSETUPPROPKEY *)&unk_1C0088860,
              (unsigned int *)&a3[7]) < 0 )
    LODWORD(a3[7].m_ptr) = 0;
  if ( (int)NetSetupPropertyBag::ReadUint32(
              (NetSetupPropertyBag *)&v19,
              (const struct _NETSETUPPROPKEY *)&unk_1C0088848,
              (unsigned int *)&a3[7].m_ptr + 1) < 0 )
    HIDWORD(a3[7].m_ptr) = 0;
  result = NetSetupPropertyBag::ReadBoolean(
             (NetSetupPropertyBag *)&v19,
             (const struct _NETSETUPPROPKEY *)&unk_1C0088830,
             (bool *)&a3[16].m_ptr + 5);
  if ( (int)result >= 0 )
  {
    result = NetSetupPropertyBag::ReadBoolean(
               (NetSetupPropertyBag *)&v19,
               (const struct _NETSETUPPROPKEY *)&unk_1C0088818,
               (bool *)&a3[16].m_ptr + 4);
    if ( (int)result >= 0 )
    {
      result = NetSetupPropertyBag::ReadUint32(
                 (NetSetupPropertyBag *)&v19,
                 (const struct _NETSETUPPROPKEY *)&unk_1C0088800,
                 (unsigned int *)&a3[4]);
      if ( (_DWORD)result == -1073741772 )
      {
        LODWORD(a3[4].m_ptr) = 0;
      }
      else if ( (_DWORD)result )
      {
        return result;
      }
      LOWORD(a3[2].m_ptr) = v18;
      HIDWORD(a3[6].m_ptr) = 0;
      result = ndisIfReadNetworkGuidFromKey(this, (struct _GUID *)((char *)&a3[4].m_ptr + 4));
      if ( (int)result < 0 )
        return result;
      if ( !a2->m_ptr )
      {
LABEL_25:
        BYTE6(a3[16].m_ptr) = 1;
        result = NetSetupPropertyBag::ReadBoolean(
                   (NetSetupPropertyBag *)&v19,
                   (const struct _NETSETUPPROPKEY *)&unk_1C00887E8,
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
                   (NetSetupPropertyBag *)&v19,
                   (const struct _NETSETUPPROPKEY *)&unk_1C00887D0,
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
                   (NetSetupPropertyBag *)&v19,
                   (const struct _NETSETUPPROPKEY *)&unk_1C00887B8,
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
                   (NetSetupPropertyBag *)&v19,
                   (const struct _NETSETUPPROPKEY *)&unk_1C00887A0,
                   (unsigned int *)&a3[18]);
        if ( (_DWORD)result == -1073741772 )
        {
          BYTE6(a3[16].m_ptr) = 0;
        }
        else if ( (int)result < 0 )
        {
          return result;
        }
        return 0LL;
      }
      LOWORD(a3[8].m_ptr) = 0;
      v16 = 0LL;
      v17 = 0LL;
      v9 = 0x7FFFLL;
      v10 = L"CurrentAddress";
      while ( *v10 )
      {
        ++v10;
        if ( !--v9 )
        {
          v15 = -1073741811;
          goto LABEL_53;
        }
      }
      v17 = L"CurrentAddress";
      LOWORD(v16) = 2 * (0x7FFF - v9);
      WORD1(v16) = v16 + 2;
      v15 = KRegKey::QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___(a2, &v16, &a3[8]);
      if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741772 )
      {
LABEL_53:
        if ( (unsigned __int8)byte_1C00A0265 >= 2u )
          WPP_SF_Sd(0x12u, &WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids, L"CurrentAddress", v15);
        return v15;
      }
      WORD1(a3[12].m_ptr) = 0;
      v16 = 0LL;
      v17 = 0LL;
      v11 = L"PermanentAddress";
      v12 = 0x7FFFLL;
      while ( *v11 )
      {
        ++v11;
        if ( !--v12 )
        {
          v15 = -1073741811;
          goto LABEL_51;
        }
      }
      v17 = L"PermanentAddress";
      LOWORD(v16) = 2 * (0x7FFF - v12);
      WORD1(v16) = v16 + 2;
      v13 = KRegKey::QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___(a2, &v16, (char *)&a3[12].m_ptr + 2);
      v15 = v13;
      if ( ((v13 + 0x80000000) & 0x80000000) != 0 || v13 == -1073741772 )
        goto LABEL_25;
LABEL_51:
      if ( (unsigned __int8)byte_1C00A0265 < 2u )
        return v15;
      WPP_SF_Sd(0x12u, &WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids, L"PermanentAddress", v15);
      return v15;
    }
  }
  return result;
}
