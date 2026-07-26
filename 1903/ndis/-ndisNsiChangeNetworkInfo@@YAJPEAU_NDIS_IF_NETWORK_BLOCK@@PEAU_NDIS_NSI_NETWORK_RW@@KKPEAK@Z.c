/*
 * XREFs of ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C0063D54
 * Callers:
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0065530 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065C80 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00361D8 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368CC (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C003F544 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     ?ndisIfReleaseSiteId@@YAXK@Z @ 0x1C0063B7C (-ndisIfReleaseSiteId@@YAXK@Z.c)
 */

__int64 __fastcall ndisNsiChangeNetworkInfo(
        struct _NDIS_IF_NETWORK_BLOCK *a1,
        _LIST_ENTRY *p_InterfaceLink,
        int a3,
        int a4,
        unsigned int *a5)
{
  int v6; // ebp
  struct _NDIS_NSI_NETWORK_RW *v7; // r13
  unsigned int v9; // ebx
  unsigned int *v10; // rax
  char v11; // r12
  int v12; // r11d
  int v13; // r8d
  int v14; // r15d
  _NDIS_OBJECT_HEADER *v15; // rcx
  unsigned int v16; // ebp
  __int64 v18; // rax
  _LIST_ENTRY v19; // xmm0
  unsigned int SiteId; // eax
  unsigned int CompartmentId; // ecx
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // r10
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v24; // r10
  _NDIS_IF_COMPARTMENT_BLOCK *v25; // rbp
  _LIST_ENTRY *p_CompartmentLink; // r14
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_NetworkLink; // rax
  _LIST_ENTRY *v30; // rcx
  _LIST_ENTRY *v31; // rcx
  char v32; // [rsp+30h] [rbp-48h]
  int v34; // [rsp+98h] [rbp+20h]

  v6 = a3;
  v7 = (struct _NDIS_NSI_NETWORK_RW *)p_InterfaceLink;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = (char)p_InterfaceLink;
    LOBYTE(p_InterfaceLink) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_InterfaceLink,
      22,
      112,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v32);
  }
  v10 = a5;
  v11 = 0;
  v12 = v6;
  v34 = v6;
  v13 = a4;
  *a5 = 0;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
LABEL_13:
        v10 = a5;
        v6 = a3;
        break;
      }
      v14 = 0;
      if ( a4 )
      {
        if ( a4 == 4 )
        {
          CompartmentId = v7->CompartmentId;
          v14 = 4;
          if ( a1->NetworkInfo.CompartmentId != CompartmentId )
          {
            Compartment = a1->Compartment;
            if ( !Compartment
              || Compartment->LoopbackNetwork == a1
              || (CompartmentBlock = ndisIfFindCompartmentBlock(CompartmentId), (v25 = CompartmentBlock) == 0LL)
              || (CompartmentBlock->Flags & 1) != 0 )
            {
LABEL_10:
              v9 = -1073741811;
              goto LABEL_11;
            }
            p_CompartmentLink = &a1->CompartmentLink;
            Flink = a1->CompartmentLink.Flink;
            if ( Flink->Blink != &a1->CompartmentLink
              || (Blink = a1->CompartmentLink.Blink, Blink->Flink != p_CompartmentLink)
              || (Blink->Flink = Flink,
                  Flink->Blink = Blink,
                  COMPARTMENTBLOCK_DECREMENT_REF(v24),
                  p_NetworkLink = &v25->NetworkLink,
                  v30 = v25->NetworkLink.Flink,
                  v30->Blink != &v25->NetworkLink) )
            {
              __fastfail(3u);
            }
            p_CompartmentLink->Flink = v30;
            a1->CompartmentLink.Blink = p_NetworkLink;
            v30->Blink = p_CompartmentLink;
            p_NetworkLink->Flink = p_CompartmentLink;
            _InterlockedIncrement(&v25->Ref);
            p_InterfaceLink = &a1->InterfaceLink;
            v31 = a1->InterfaceLink.Flink;
            a1->NetworkInfo.CompartmentId = v7->CompartmentId;
            a1->Compartment = v25;
            while ( v31 != p_InterfaceLink )
            {
              LODWORD(v31[-43].Flink) = v7->CompartmentId;
              v31[7].Flink = &a1->Compartment->Link;
              v31 = v31->Flink;
            }
            v12 = v34;
          }
          v13 = 8;
        }
        else if ( a4 == 8 )
        {
          SiteId = v7->SiteId;
          v14 = 4;
          if ( SiteId )
          {
            if ( SiteId >= 0x7FFFFFF )
              goto LABEL_10;
            ndisIfReleaseSiteId(a1->NetworkInfo.SiteId);
            LODWORD(p_InterfaceLink) = v7->SiteId;
            a1->NetworkInfo.SiteId = (unsigned int)p_InterfaceLink;
          }
          v13 = 12;
        }
        else
        {
          if ( a4 == 12 )
          {
            v14 = 516;
            if ( !ndisIsValidIfStringParts(&v7->NetworkName.Length, v7->NetworkName.Length) )
              goto LABEL_10;
            p_InterfaceLink = (_LIST_ENTRY *)&a1->NetworkInfo.NetworkName;
            v18 = 4LL;
            do
            {
              v19 = *(_LIST_ENTRY *)&v15->Type;
              v15 += 32;
              *p_InterfaceLink = v19;
              p_InterfaceLink += 8;
              p_InterfaceLink[-7] = *(_LIST_ENTRY *)&v15[-28].Type;
              p_InterfaceLink[-6] = *(_LIST_ENTRY *)&v15[-24].Type;
              p_InterfaceLink[-5] = *(_LIST_ENTRY *)&v15[-20].Type;
              p_InterfaceLink[-4] = *(_LIST_ENTRY *)&v15[-16].Type;
              p_InterfaceLink[-3] = *(_LIST_ENTRY *)&v15[-12].Type;
              p_InterfaceLink[-2] = *(_LIST_ENTRY *)&v15[-8].Type;
              p_InterfaceLink[-1] = *(_LIST_ENTRY *)&v15[-4].Type;
              --v18;
            }
            while ( v18 );
            v13 = 528;
            LODWORD(p_InterfaceLink->Flink) = *v15;
          }
          v11 = 1;
        }
      }
      else
      {
        v14 = 4;
        v13 = 4;
      }
      if ( !v9 && v14 && v12 >= v14 )
      {
        v12 += a4 - v13;
        a4 = v13;
        v34 = v12;
        goto LABEL_12;
      }
LABEL_11:
      v11 = 1;
LABEL_12:
      if ( v12 <= 0 )
        goto LABEL_13;
    }
  }
  v16 = v6 - v12;
  *v10 = v16;
  if ( !v16 )
    v9 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(p_InterfaceLink) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_InterfaceLink,
      22,
      113,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      (char)v7,
      v9);
  }
  return v9;
}
